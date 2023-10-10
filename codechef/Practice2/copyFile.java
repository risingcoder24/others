import java.io.FileInputStream;
import java.io.FileOutputStream;
import java.util.*;

public class copyFile {
    public static void main(String[] args){

        FileInputStream r=new FileInputStream("");
        FileOutputStream w=new FileOutputStream("C:\\Users\\khush\\Desktop\\khushigre.txt");

        int i;
        while((i=r.read())!=-1){
            w.write((char)i);

        }

        System.out.println("Data copied successfully!");

    }
}
