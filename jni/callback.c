#include <jni.h>

/*
 * Class:     com_yanwanfu_callbackjava_JNI
 * Method:    callbackvoidmethod
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_yanwanfu_callbackjava_JNI_callbackvoidmethod(
		JNIEnv *env, jobject clazz) { // clazz == JNI.class
	/**
	 * 使用java反射机制回调Java方法
	 *
	 * 1 获取字节码对象
	 * jclass      (*FindClass)(JNIEnv*, const char*);
	 *
	 */
	jclass claz = (*env)->FindClass(env,"com/yanwanfu/callbackjava/JNI");

	/**
	 * 2 获取Method方法
	 * arg1:env,args2:字节码对象,arg3: 回调java的方法名，arg4:回调java的方法名的方法签名
	 * methodID   (*GetMethodID)(JNIEnv*, jclass, const char*, const char*);
	 *
	 */
	jmethodID methodId = (*env)->GetMethodID(env,claz,"helloFromJava","()V");

	/**
	 * 3 通过字节码对象创建一个对象
	 *
	 */
	 //clazz == JNI.class  不用创建

	/**
	 * 4 通过对象调用方法
	 *  void        (*CallVoidMethod)(JNIEnv*, jobject, jmethodID, ...);
	 */
	 (*env)->CallVoidMethod(env,clazz,methodId);


}

