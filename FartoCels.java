/* Input: Temperature in Fahrenheit
 * Algorithm: tc = tf - 32) * 5.0f/9
 * Output: Temperature in Celsius
 */

import java.util.Scanner;
public class FartoCels {
	
	public static void main(String[] args) {
		float tc,tf;
		Scanner input;
		input = new Scanner(System.in);
		System.out.println("Enter the temperature in Fahrenheit");
		tf = input.nextFloat();
		tc = (tf - 32) * 5.0f/9;
		System.out.printf("Celsuis = %5.2f\n", tc);
		input.close();
	}//end of main

}//end of FartoCels
