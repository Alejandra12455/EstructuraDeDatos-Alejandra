/**
 * @(#)Ejercicio2.java
 *
 * Ejercicio2 application
 *
 * @author 
 * @version 1.00 2018/9/29
 */
import java.util.*; 
public class Ejercicio2 {
    
    public static void main(String[] args) {
    	Scanner teclado = new Scanner(System.in);
    	int num;
    	System.out.println("Ingresa el numero en base 10: ");
        num = teclado.nextInt();
        System.out.println("El numero en binario es: ");
    	DAB(num);
    	
    }
    public static void DAB(int n)
    {
    	
    	if(n<2)
    	{
    	 System.out.print(n);
    	}
    	else
    	{
    		DAB(n/2);
    		System.out.print(n%2);
    	}
    }
    
}
