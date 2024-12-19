import java.util.*;

public class Problem {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter A: ");
        String name = sc.nextLine();
        System.out.println("The next Move for a B to Win is: ");
        switch (name) {
            case "rock":
                System.out.println("Scissor");
                break;
            case "paper":
                System.out.println("rock");
                break;
            case "scissor":
                System.out.println("Paper");
                break;
            default:
                break;
        }

        System.out.println("Enter B: ");
        String name2 = sc.nextLine();

        if((name == "rock" && name2 == "scissor") || (name == "paper" && name2 == "rock") || (name == "scissor" && name2 == "paper")){
            System.out.println("A is winning");
        }else{
            System.out.println("B wins");
        }

    }    
}


