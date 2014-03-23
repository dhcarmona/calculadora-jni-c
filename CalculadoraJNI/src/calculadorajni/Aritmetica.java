/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

package calculadorajni;

public class Aritmetica{
    static {
      System.loadLibrary("Aritmetica"); // Load native library at runtime
                                   // hello.dll (Windows) or libhello.so (Unixes)
   }
    public native double suma(double op1, double op2);
    public native double resta(double op1, double op2);
    public native double mul(double op1, double op2);
    public native double div(double op1, double op2);
}
