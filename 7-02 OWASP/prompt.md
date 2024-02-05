Identfy all the security issues in the following code. Refer to the OWASP rules to hilight the issues.

```
import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.ResultSet;
import java.sql.Statement;
import java.io.*;

public class BankingApp {

    public static void main(String[] args) {
        try {
            String user = args[0];
            String pass = args[1];
            Connection conn = DriverManager.getConnection("jdbc:mysql://localhost/mydb", "root", "password");
            Statement stmt = conn.createStatement();
            ResultSet rs = stmt.executeQuery("SELECT * FROM users WHERE username = '" + user + "' AND password = '" + pass + "'");

            String fileName = args[2];
            FileInputStream fis = new FileInputStream("/var/app/files/" + fileName);
            int content;
            while ((content = fis.read()) != -1) {
                // Process the content
                System.out.print((char) content);
            }

            System.out.println("User Login: " + user + " Password: " + pass);

            ObjectInputStream ois = new ObjectInputStream(new FileInputStream("object.bin"));
            Object obj = ois.readObject();
        } catch (Exception e) {
            e.printStackTrace();
        }
    }
}
```

