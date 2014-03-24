package calculadorajni;

public class Aritmetica{
    static {
      System.loadLibrary("Aritmetica"); 
   }
    public native double suma(double op1, double op2);
    public native double resta(double op1, double op2);
    public native double mul(double op1, double op2);
    public native double div(double op1, double op2);
}
