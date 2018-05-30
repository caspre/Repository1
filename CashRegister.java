import java.util.Scanner;

public class CashRegister {
	double totalcost = 0.0;
	
	double inputPrice(){
		Scanner input = new Scanner(System.in);
		System.out.println("Enter the price");
		System.out.print("$");
		double p;
		p = input.nextDouble();
		return p;
	}//end of inputPrice
	
	void accumulateCost(double total){
		totalcost += total;
	}//end of accumulateCost
	
	void computeTax(double taxRate){
		double tax = taxRate * totalcost;
		totalcost += tax;
	}//end of computeTax
	
	String outputCost(){
		return "The total cost is $" + totalcost;	
	}//end of outputCost

}
