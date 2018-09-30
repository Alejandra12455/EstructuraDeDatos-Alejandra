/**
 * @(#)Ejercicio3.java
 *
 * Ejercicio3 application
 *
 * @author 
 * @version 1.00 2018/9/29
 */
 import java.util.*;
public class Ejercicio3 
{
    
    public static void main(String[] args) {
    	
    	Scanner teclado = new Scanner(System.in);
    	int num;
    	System.out.println("Ingresa el cambio total a entregar: ");
        num = teclado.nextInt();
        System.out.println("El cambio a entregar es: ");
    	DAB(num);
    }
    public static void DAB(int n)
    {
    	int a = n/200;
    	n = n%200;
    	System.out.print("Monedas de 200 pesos: ");
    	System.out.println(a);
    	int b = n/100;
    	n = n%100;
    	System.out.print("Monedas de 100 pesos: ");
    	System.out.println(b);
    	int c = n/50;
    	n= n%50;
    	System.out.print("Monedas de 50 pesos: ");
    	System.out.println(c);
    	int d = n/20;
    	n = n%20;
    	System.out.print("Monedas de 20 pesos: ");
    	System.out.println(d);    	
    	int e = n/10;
    	n = n%10;
    	System.out.print("Monedas de 10 pesos: ");
    	System.out.println(e);
    	int f = n/5;
    	n = n%5;
    	System.out.print("Monedas de 5 pesos: ");
    	System.out.println(f);
    	int g = n/2;
    	n = n%2;
    	System.out.print("Monedas de 2 pesos: ");
    	System.out.println(g);
    	int h = n/1;
    	n = n%1;
    	System.out.print("Monedas de 1 peso: ");
    	System.out.println(h);
    		
    	
    }
}
