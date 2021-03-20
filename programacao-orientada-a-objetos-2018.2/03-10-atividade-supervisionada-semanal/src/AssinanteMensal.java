import java.util.Observable;
import java.util.Observer;

public class AssinanteMensal implements Observer {
    
    Observable revista;
    int edicaoNovaRevista;
     
    public AssinanteMensal(Observable revista) {
        this.revista = revista;
        revista.addObserver(this);
    }
    
    public void update(Observable revistaSubject, Object arg1) {
        if (revistaSubject instanceof RevistaVeja) {
            RevistaVeja revista = (RevistaVeja) revistaSubject;
            edicaoNovaRevista = revista.getEdicao();
            System.out.println("Olá, assinante MENSAL. "
            		+ "Nova edição da Revista Veja. " +
                    "Esta é a edição número: " + edicaoNovaRevista);
        }
    }
}