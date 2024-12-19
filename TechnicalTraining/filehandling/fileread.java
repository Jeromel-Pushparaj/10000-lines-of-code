package filehandling;
import java.io.File;
import java.io.FileNotFoundException;
import java.util.Scanner;
public class fileread {
    public static void main(String[] args) {
        try{
            File myobj = new File("D:\\playground\\10000-lines-of-code\\TechnicalTraining\\ex.txt");
            Scanner myread = new Scanner(myobj);
            while (myread.hasNextLine()){
                String data = myread.nextLine();
                System.out.println(data);
            }
            myread.close();
        }catch(FileNotFoundException e){
            System.out.println("An Error Occurred");
            e.printStackTrace();
        }
    }
}
