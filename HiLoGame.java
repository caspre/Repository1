import java.util.Scanner;

public class HiLoGame {
	public static void main(String[] args){
		Scanner input = new Scanner(System.in);
		int computerSecret,guess,countGuess;
		countGuess = 1;
		computerSecret = (int) (1000 * Math.random() + 1);
		System.out.println("Enter a number between 1 and 1000");;
		guess = input.nextInt();
		while(guess != computerSecret) {//sentinel value is a match
			if(guess < computerSecret){
				System.out.println("LO");
			}
			else if ( guess > computerSecret){
				System.out.println("HI");
			}
			countGuess += 1;
			System.out.println("Enter a numver between 1 and 1000");;
			guess = input.nextInt();//loop read
		}
		System.out.printf("You won with %d guesses\n", countGuess);
		input.close();
	}
	
}
