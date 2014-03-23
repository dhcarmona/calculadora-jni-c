   #include <jni.h>
   #include <stdio.h>
   #include "AritmeticaNativa.h"
        
            JNIEXPORT jdouble JNICALL Java_calculadorajni_Aritmetica_suma
            (JNIEnv * env, jobject obj, jdouble op1, jdouble op2)
        {
                return op1+op2;
        }
            
            JNIEXPORT jdouble JNICALL Java_calculadorajni_Aritmetica_resta
            (JNIEnv * env, jobject obj, jdouble op1, jdouble op2)
        {
                return op1-op2;
        }
            
            JNIEXPORT jdouble JNICALL Java_calculadorajni_Aritmetica_mul
            (JNIEnv * env, jobject obj, jdouble op1, jdouble op2)
        {
                return op1*op2;
        }
            
            JNIEXPORT jdouble JNICALL Java_calculadorajni_Aritmetica_div
            (JNIEnv * env, jobject obj, jdouble op1, jdouble op2)
        {
                return op1/op2;
        }
