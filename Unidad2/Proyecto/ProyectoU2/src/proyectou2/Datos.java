package proyectou2;

import java.util.ArrayList;

public class Datos {
    String [] listanom;
    Datos(ArrayList <String> nombres){
    this.listanom=new String [nombres.size()];
    listanom=nombres. toArray(listanom);
    }
 
    public boolean BuscarRecursivo(String [] nombres, String buscar, int i){
    if(i==nombres.length)
        return false;
    if(nombres[i].equals(buscar)){
        return true;
    }
    else
        return BuscarRecursivo(nombres, buscar, i+1);
    }
    
    public String Comprobar(String buscar, int i){
    boolean respuesta=BuscarRecursivo(listanom, buscar, i);
    if (respuesta==true){
        return "El nombre: "+buscar+" si se encuentra en la lista";
    }
    else 
        return "El nombre: "+buscar+" no se encuentra en la lista";
    }

    public void ordenare (String [] nombres, int j){
        if(j<nombres.length){
                ordenar(nombres, j, 0);
                ordenare(nombres, j+1);
        
        }     
}

    public void ordenar(String[] nombres, int j, int x){
            if (x < nombres.length && j!= x){
                if(nombres[j].compareToIgnoreCase(nombres[x])<0){
                    String con = nombres[j];
                    nombres[j]=nombres[x];
                    nombres[x]=con;  
                } 
                ordenar(nombres, j,x+1);
            }     
      }         
}
