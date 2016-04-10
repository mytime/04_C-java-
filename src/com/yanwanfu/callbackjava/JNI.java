package com.yanwanfu.callbackjava;

public class JNI {
	
	static{
		
		System.loadLibrary("callback");
	}
	//callbackvoidmethod()
	// 	-> callback.c 
	//			->Java_com_yanwanfu_callbackjava_JNI_callbackvoidmethod 
	// 					->JNI.java
	//							-> helloFromJava
	public native void callbackvoidmethod();
	
	//C调用java空方法
	public void helloFromJava(){
		System.out.println("hello from java");
	}
	//C调用Java带有两个int参数的方法
	public int add(int x,int y){
		return x+y;
	}
	//C调用java中参数为String的方法
	public void printString(String s){
		
	}

}
