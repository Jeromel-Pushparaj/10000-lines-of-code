package filehandling;
import java.io.*;
public class delete {
    public static void main(String[] args) {
        File myobj = new File("D:\\playground\\10000-lines-of-code\\TechnicalTraining\\ex.txt");
        if(myobj.delete()){
            System.err.println("Deleted the file " + myobj.getAbsoluteFile());
        }else{
            System.out.println("failed to delete the file;");
        }
    }
}
