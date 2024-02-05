The following Java code has an incorrect behaviour: it put everything in a single bucket.
Find the bug.
```
public static <T> 
Collection<List<T>> partition(Collection<T> elements, int numBuckets) 
{
  Map<Integer, List<T>> buckets = new HashMap<>(numBuckets);
  
  int initialCapacity = elements.size() / numBuckets;

  int index = 0;
  for (T element : elements) 
  {
    int bucket = index % numBuckets;
    buckets.computeIfAbsent(bucket, 
                            key -> new ArrayList<>(initialCapacity))
           .add(element); 
  }

  return buckets.values();
}
```