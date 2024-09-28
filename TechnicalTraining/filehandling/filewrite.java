package filehandling;
import java.io.*;
public class filewrite {
    public static void main(String[] args) {
        try{
            FileWriter mywrite =     new FileWriter("D:\\playground\\10000-lines-of-code\\TechnicalTraining\\ex.txt");
            mywrite.write("File in java might be tricky , but it is easy to learn;");
            mywrite.close();

        }catch(IOException e){
            System.out.println("AN error Occured");
            e.printStackTrace();
        }
    }
}
