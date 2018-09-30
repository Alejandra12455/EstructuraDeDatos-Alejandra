/**
 * @(#)Ejercicio1.java
 *
 * Ejercicio1 application
 *
 * @author 
 * @version 1.00 2018/9/29
 */
package palindromo;
import java.util.*;

public class Ejercicio1 {
    
    public static void main(String[] args) {

        Scanner teclado= new Scanner(System.in);
        String nuevo;
        Palindromo objclass=new Palindromo();
        System.out.println("Ingresa la palabra o frase: ");
        nuevo = teclado.nextLine();
        if(objclass.espalindromo(nuevo)){
            System.out.println("La palabra o frase es Palindromo");
        }
        else
        {
            System.out.println("La palabra o frase no es Palindromo");
        }
    }
}
