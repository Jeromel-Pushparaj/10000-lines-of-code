package filehandling;
import java.io.*;
public class createNfile {
    public static void main(String[] args) {
        try{
            File file = new File("D:\\playground\\10000-lines-of-code\\TechnicalTraining\\newfile.txt");
            if(file.createNewFile()){
                System.out.println("new file is created");
            }else{
                System.err.println("File already exists");
            }
        }catch(IOException e){
            System.out.println(e);
        }
    }
}
