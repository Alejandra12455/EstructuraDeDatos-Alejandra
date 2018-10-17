package proyectou2;

import java.io.BufferedReader;
import java.io.FileReader;
import java.util.ArrayList;
import java.util.Scanner;

public class ProyectoU2 {

    public static void main(String[] args) {
    int opcion;
    Scanner teclado=new Scanner(System.in);
    ArrayList<String> Nombres = new ArrayList();
    try {
         try (FileReader fr = new FileReader("Nombres.txt")) {
             BufferedReader br = new BufferedReader(fr);
             String linea;
             while((linea = br.readLine()) != null)
             {
                 Nombres.add(linea);
             }
             fr.close();        
         }
    }
    catch(Exception e) {
      System.out.println("El archivo no existe");
    }
    Datos obj= new Datos(Nombres);
    
    do {
        System.out.println("\nBienvenido");
        System.out.println("1- Ordenar lista");
        System.out.println("2- Buscar nombre");
        System.out.println("3- Salir");
        System.out.print("Elige una opcion: ");
        opcion=teclado.nextInt();
        System.out.print("\n");
        
        if(opcion==1)
        {
            String nombre[] = new String [Nombres.size()];
            nombre=Nombres.toArray(nombre);
             obj.ordenare(nombre,0);
            for(String a:nombre){
           System.out.println(a);
        }            
     } else if(opcion==2)
        {
            String nom;
            System.out.print("Ingrese el nombre que desee buscar: ");
            nom=teclado.next();
            System.out.println(obj.Comprobar(nom, 0));
        }
     } while(opcion!=3);       
    }  
  }
