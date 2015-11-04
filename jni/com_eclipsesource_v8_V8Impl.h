/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_eclipsesource_v8_V8 */

#ifndef _Included_com_eclipsesource_v8_V8
#define _Included_com_eclipsesource_v8_V8
#ifdef __cplusplus
extern "C" {
#endif
#undef com_eclipsesource_v8_V8_NULL
#define com_eclipsesource_v8_V8_NULL 0L
#undef com_eclipsesource_v8_V8_UNKNOWN
#define com_eclipsesource_v8_V8_UNKNOWN 0L
#undef com_eclipsesource_v8_V8_INTEGER
#define com_eclipsesource_v8_V8_INTEGER 1L
#undef com_eclipsesource_v8_V8_DOUBLE
#define com_eclipsesource_v8_V8_DOUBLE 2L
#undef com_eclipsesource_v8_V8_BOOLEAN
#define com_eclipsesource_v8_V8_BOOLEAN 3L
#undef com_eclipsesource_v8_V8_STRING
#define com_eclipsesource_v8_V8_STRING 4L
#undef com_eclipsesource_v8_V8_V8_ARRAY
#define com_eclipsesource_v8_V8_V8_ARRAY 5L
#undef com_eclipsesource_v8_V8_V8_OBJECT
#define com_eclipsesource_v8_V8_V8_OBJECT 6L
#undef com_eclipsesource_v8_V8_V8_FUNCTION
#define com_eclipsesource_v8_V8_V8_FUNCTION 7L
#undef com_eclipsesource_v8_V8_UNDEFINED
#define com_eclipsesource_v8_V8_UNDEFINED 99L
/*
 * Class:     com_eclipsesource_v8_V8
 * Method:    _initNewV8Object
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_com_eclipsesource_v8_V8__1initNewV8Object
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_eclipsesource_v8_V8
 * Method:    _createTwin
 * Signature: (JJJ)V
 */
JNIEXPORT void JNICALL Java_com_eclipsesource_v8_V8__1createTwin
  (JNIEnv *, jobject, jlong, jlong, jlong);

/*
 * Class:     com_eclipsesource_v8_V8
 * Method:    _releaseRuntime
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_com_eclipsesource_v8_V8__1releaseRuntime
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_eclipsesource_v8_V8
 * Method:    _createIsolate
 * Signature: (Ljava/lang/String;)J
 */
JNIEXPORT jlong JNICALL Java_com_eclipsesource_v8_V8__1createIsolate
  (JNIEnv *, jobject, jstring);

/*
 * Class:     com_eclipsesource_v8_V8
 * Method:    _executeIntegerScript
 * Signature: (JLjava/lang/String;Ljava/lang/String;I)I
 */
JNIEXPORT jint JNICALL Java_com_eclipsesource_v8_V8__1executeIntegerScript
  (JNIEnv *, jobject, jlong, jstring, jstring, jint);

/*
 * Class:     com_eclipsesource_v8_V8
 * Method:    _executeDoubleScript
 * Signature: (JLjava/lang/String;Ljava/lang/String;I)D
 */
JNIEXPORT jdouble JNICALL Java_com_eclipsesource_v8_V8__1executeDoubleScript
  (JNIEnv *, jobject, jlong, jstring, jstring, jint);

/*
 * Class:     com_eclipsesource_v8_V8
 * Method:    _executeStringScript
 * Signature: (JLjava/lang/String;Ljava/lang/String;I)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_eclipsesource_v8_V8__1executeStringScript
  (JNIEnv *, jobject, jlong, jstring, jstring, jint);

/*
 * Class:     com_eclipsesource_v8_V8
 * Method:    _executeBooleanScript
 * Signature: (JLjava/lang/String;Ljava/lang/String;I)Z
 */
JNIEXPORT jboolean JNICALL Java_com_eclipsesource_v8_V8__1executeBooleanScript
  (JNIEnv *, jobject, jlong, jstring, jstring, jint);

/*
 * Class:     com_eclipsesource_v8_V8
 * Method:    _executeScript
 * Signature: (JILjava/lang/String;Ljava/lang/String;I)Ljava/lang/Object;
 */
JNIEXPORT jobject JNICALL Java_com_eclipsesource_v8_V8__1executeScript
  (JNIEnv *, jobject, jlong, jint, jstring, jstring, jint);

/*
 * Class:     com_eclipsesource_v8_V8
 * Method:    _executeVoidScript
 * Signature: (JLjava/lang/String;Ljava/lang/String;I)V
 */
JNIEXPORT void JNICALL Java_com_eclipsesource_v8_V8__1executeVoidScript
  (JNIEnv *, jobject, jlong, jstring, jstring, jint);

/*
 * Class:     com_eclipsesource_v8_V8
 * Method:    _release
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_com_eclipsesource_v8_V8__1release
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     com_eclipsesource_v8_V8
 * Method:    _contains
 * Signature: (JJLjava/lang/String;)Z
 */
JNIEXPORT jboolean JNICALL Java_com_eclipsesource_v8_V8__1contains
  (JNIEnv *, jobject, jlong, jlong, jstring);

/*
 * Class:     com_eclipsesource_v8_V8
 * Method:    _getKeys
 * Signature: (JJ)[Ljava/lang/String;
 */
JNIEXPORT jobjectArray JNICALL Java_com_eclipsesource_v8_V8__1getKeys
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     com_eclipsesource_v8_V8
 * Method:    _getInteger
 * Signature: (JJLjava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_com_eclipsesource_v8_V8__1getInteger
  (JNIEnv *, jobject, jlong, jlong, jstring);

/*
 * Class:     com_eclipsesource_v8_V8
 * Method:    _getBoolean
 * Signature: (JJLjava/lang/String;)Z
 */
JNIEXPORT jboolean JNICALL Java_com_eclipsesource_v8_V8__1getBoolean
  (JNIEnv *, jobject, jlong, jlong, jstring);

/*
 * Class:     com_eclipsesource_v8_V8
 * Method:    _getDouble
 * Signature: (JJLjava/lang/String;)D
 */
JNIEXPORT jdouble JNICALL Java_com_eclipsesource_v8_V8__1getDouble
  (JNIEnv *, jobject, jlong, jlong, jstring);

/*
 * Class:     com_eclipsesource_v8_V8
 * Method:    _getString
 * Signature: (JJLjava/lang/String;)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_eclipsesource_v8_V8__1getString
  (JNIEnv *, jobject, jlong, jlong, jstring);

/*
 * Class:     com_eclipsesource_v8_V8
 * Method:    _get
 * Signature: (JIJLjava/lang/String;)Ljava/lang/Object;
 */
JNIEXPORT jobject JNICALL Java_com_eclipsesource_v8_V8__1get
  (JNIEnv *, jobject, jlong, jint, jlong, jstring);

/*
 * Class:     com_eclipsesource_v8_V8
 * Method:    _executeIntegerFunction
 * Signature: (JJLjava/lang/String;J)I
 */
JNIEXPORT jint JNICALL Java_com_eclipsesource_v8_V8__1executeIntegerFunction
  (JNIEnv *, jobject, jlong, jlong, jstring, jlong);

/*
 * Class:     com_eclipsesource_v8_V8
 * Method:    _executeDoubleFunction
 * Signature: (JJLjava/lang/String;J)D
 */
JNIEXPORT jdouble JNICALL Java_com_eclipsesource_v8_V8__1executeDoubleFunction
  (JNIEnv *, jobject, jlong, jlong, jstring, jlong);

/*
 * Class:     com_eclipsesource_v8_V8
 * Method:    _executeStringFunction
 * Signature: (JJLjava/lang/String;J)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_eclipsesource_v8_V8__1executeStringFunction
  (JNIEnv *, jobject, jlong, jlong, jstring, jlong);

/*
 * Class:     com_eclipsesource_v8_V8
 * Method:    _executeBooleanFunction
 * Signature: (JJLjava/lang/String;J)Z
 */
JNIEXPORT jboolean JNICALL Java_com_eclipsesource_v8_V8__1executeBooleanFunction
  (JNIEnv *, jobject, jlong, jlong, jstring, jlong);

/*
 * Class:     com_eclipsesource_v8_V8
 * Method:    _executeFunction
 * Signature: (JIJLjava/lang/String;J)Ljava/lang/Object;
 */
JNIEXPORT jobject JNICALL Java_com_eclipsesource_v8_V8__1executeFunction__JIJLjava_lang_String_2J
  (JNIEnv *, jobject, jlong, jint, jlong, jstring, jlong);

/*
 * Class:     com_eclipsesource_v8_V8
 * Method:    _executeFunction
 * Signature: (JJJJ)Ljava/lang/Object;
 */
JNIEXPORT jobject JNICALL Java_com_eclipsesource_v8_V8__1executeFunction__JJJJ
  (JNIEnv *, jobject, jlong, jlong, jlong, jlong);

/*
 * Class:     com_eclipsesource_v8_V8
 * Method:    _executeVoidFunction
 * Signature: (JJLjava/lang/String;J)V
 */
JNIEXPORT void JNICALL Java_com_eclipsesource_v8_V8__1executeVoidFunction
  (JNIEnv *, jobject, jlong, jlong, jstring, jlong);

/*
 * Class:     com_eclipsesource_v8_V8
 * Method:    _equals
 * Signature: (JJJ)Z
 */
JNIEXPORT jboolean JNICALL Java_com_eclipsesource_v8_V8__1equals
  (JNIEnv *, jobject, jlong, jlong, jlong);

/*
 * Class:     com_eclipsesource_v8_V8
 * Method:    _strictEquals
 * Signature: (JJJ)Z
 */
JNIEXPORT jboolean JNICALL Java_com_eclipsesource_v8_V8__1strictEquals
  (JNIEnv *, jobject, jlong, jlong, jlong);

/*
 * Class:     com_eclipsesource_v8_V8
 * Method:    _sameValue
 * Signature: (JJJ)Z
 */
JNIEXPORT jboolean JNICALL Java_com_eclipsesource_v8_V8__1sameValue
  (JNIEnv *, jobject, jlong, jlong, jlong);

/*
 * Class:     com_eclipsesource_v8_V8
 * Method:    _identityHash
 * Signature: (JJ)I
 */
JNIEXPORT jint JNICALL Java_com_eclipsesource_v8_V8__1identityHash
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     com_eclipsesource_v8_V8
 * Method:    _add
 * Signature: (JJLjava/lang/String;I)V
 */
JNIEXPORT void JNICALL Java_com_eclipsesource_v8_V8__1add__JJLjava_lang_String_2I
  (JNIEnv *, jobject, jlong, jlong, jstring, jint);

/*
 * Class:     com_eclipsesource_v8_V8
 * Method:    _addObject
 * Signature: (JJLjava/lang/String;J)V
 */
JNIEXPORT void JNICALL Java_com_eclipsesource_v8_V8__1addObject
  (JNIEnv *, jobject, jlong, jlong, jstring, jlong);

/*
 * Class:     com_eclipsesource_v8_V8
 * Method:    _add
 * Signature: (JJLjava/lang/String;Z)V
 */
JNIEXPORT void JNICALL Java_com_eclipsesource_v8_V8__1add__JJLjava_lang_String_2Z
  (JNIEnv *, jobject, jlong, jlong, jstring, jboolean);

/*
 * Class:     com_eclipsesource_v8_V8
 * Method:    _add
 * Signature: (JJLjava/lang/String;D)V
 */
JNIEXPORT void JNICALL Java_com_eclipsesource_v8_V8__1add__JJLjava_lang_String_2D
  (JNIEnv *, jobject, jlong, jlong, jstring, jdouble);

/*
 * Class:     com_eclipsesource_v8_V8
 * Method:    _add
 * Signature: (JJLjava/lang/String;Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_com_eclipsesource_v8_V8__1add__JJLjava_lang_String_2Ljava_lang_String_2
  (JNIEnv *, jobject, jlong, jlong, jstring, jstring);

/*
 * Class:     com_eclipsesource_v8_V8
 * Method:    _addUndefined
 * Signature: (JJLjava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_com_eclipsesource_v8_V8__1addUndefined
  (JNIEnv *, jobject, jlong, jlong, jstring);

/*
 * Class:     com_eclipsesource_v8_V8
 * Method:    _addNull
 * Signature: (JJLjava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_com_eclipsesource_v8_V8__1addNull
  (JNIEnv *, jobject, jlong, jlong, jstring);

/*
 * Class:     com_eclipsesource_v8_V8
 * Method:    _registerJavaMethod
 * Signature: (JJLjava/lang/String;IZ)V
 */
JNIEXPORT void JNICALL Java_com_eclipsesource_v8_V8__1registerJavaMethod
  (JNIEnv *, jobject, jlong, jlong, jstring, jint, jboolean);

/*
 * Class:     com_eclipsesource_v8_V8
 * Method:    _initNewV8Array
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_com_eclipsesource_v8_V8__1initNewV8Array
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_eclipsesource_v8_V8
 * Method:    _arrayGetSize
 * Signature: (JJ)I
 */
JNIEXPORT jint JNICALL Java_com_eclipsesource_v8_V8__1arrayGetSize
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     com_eclipsesource_v8_V8
 * Method:    _arrayGetInteger
 * Signature: (JJI)I
 */
JNIEXPORT jint JNICALL Java_com_eclipsesource_v8_V8__1arrayGetInteger
  (JNIEnv *, jobject, jlong, jlong, jint);

/*
 * Class:     com_eclipsesource_v8_V8
 * Method:    _arrayGetBoolean
 * Signature: (JJI)Z
 */
JNIEXPORT jboolean JNICALL Java_com_eclipsesource_v8_V8__1arrayGetBoolean
  (JNIEnv *, jobject, jlong, jlong, jint);

/*
 * Class:     com_eclipsesource_v8_V8
 * Method:    _arrayGetDouble
 * Signature: (JJI)D
 */
JNIEXPORT jdouble JNICALL Java_com_eclipsesource_v8_V8__1arrayGetDouble
  (JNIEnv *, jobject, jlong, jlong, jint);

/*
 * Class:     com_eclipsesource_v8_V8
 * Method:    _arrayGetString
 * Signature: (JJI)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_eclipsesource_v8_V8__1arrayGetString
  (JNIEnv *, jobject, jlong, jlong, jint);

/*
 * Class:     com_eclipsesource_v8_V8
 * Method:    _arrayGet
 * Signature: (JIJI)Ljava/lang/Object;
 */
JNIEXPORT jobject JNICALL Java_com_eclipsesource_v8_V8__1arrayGet
  (JNIEnv *, jobject, jlong, jint, jlong, jint);

/*
 * Class:     com_eclipsesource_v8_V8
 * Method:    _addArrayIntItem
 * Signature: (JJI)V
 */
JNIEXPORT void JNICALL Java_com_eclipsesource_v8_V8__1addArrayIntItem
  (JNIEnv *, jobject, jlong, jlong, jint);

/*
 * Class:     com_eclipsesource_v8_V8
 * Method:    _addArrayBooleanItem
 * Signature: (JJZ)V
 */
JNIEXPORT void JNICALL Java_com_eclipsesource_v8_V8__1addArrayBooleanItem
  (JNIEnv *, jobject, jlong, jlong, jboolean);

/*
 * Class:     com_eclipsesource_v8_V8
 * Method:    _addArrayDoubleItem
 * Signature: (JJD)V
 */
JNIEXPORT void JNICALL Java_com_eclipsesource_v8_V8__1addArrayDoubleItem
  (JNIEnv *, jobject, jlong, jlong, jdouble);

/*
 * Class:     com_eclipsesource_v8_V8
 * Method:    _addArrayStringItem
 * Signature: (JJLjava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_com_eclipsesource_v8_V8__1addArrayStringItem
  (JNIEnv *, jobject, jlong, jlong, jstring);

/*
 * Class:     com_eclipsesource_v8_V8
 * Method:    _addArrayObjectItem
 * Signature: (JJJ)V
 */
JNIEXPORT void JNICALL Java_com_eclipsesource_v8_V8__1addArrayObjectItem
  (JNIEnv *, jobject, jlong, jlong, jlong);

/*
 * Class:     com_eclipsesource_v8_V8
 * Method:    _addArrayUndefinedItem
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_com_eclipsesource_v8_V8__1addArrayUndefinedItem
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     com_eclipsesource_v8_V8
 * Method:    _addArrayNullItem
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_com_eclipsesource_v8_V8__1addArrayNullItem
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     com_eclipsesource_v8_V8
 * Method:    _getType
 * Signature: (JJLjava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_com_eclipsesource_v8_V8__1getType__JJLjava_lang_String_2
  (JNIEnv *, jobject, jlong, jlong, jstring);

/*
 * Class:     com_eclipsesource_v8_V8
 * Method:    _getType
 * Signature: (JJI)I
 */
JNIEXPORT jint JNICALL Java_com_eclipsesource_v8_V8__1getType__JJI
  (JNIEnv *, jobject, jlong, jlong, jint);

/*
 * Class:     com_eclipsesource_v8_V8
 * Method:    _getArrayType
 * Signature: (JJ)I
 */
JNIEXPORT jint JNICALL Java_com_eclipsesource_v8_V8__1getArrayType
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     com_eclipsesource_v8_V8
 * Method:    _setPrototype
 * Signature: (JJJ)V
 */
JNIEXPORT void JNICALL Java_com_eclipsesource_v8_V8__1setPrototype
  (JNIEnv *, jobject, jlong, jlong, jlong);

/*
 * Class:     com_eclipsesource_v8_V8
 * Method:    _getType
 * Signature: (JJII)I
 */
JNIEXPORT jint JNICALL Java_com_eclipsesource_v8_V8__1getType__JJII
  (JNIEnv *, jobject, jlong, jlong, jint, jint);

/*
 * Class:     com_eclipsesource_v8_V8
 * Method:    _enableDebugSupport
 * Signature: (JIZ)Z
 */
JNIEXPORT jboolean JNICALL Java_com_eclipsesource_v8_V8__1enableDebugSupport
  (JNIEnv *, jobject, jlong, jint, jboolean);

/*
 * Class:     com_eclipsesource_v8_V8
 * Method:    _disableDebugSupport
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_com_eclipsesource_v8_V8__1disableDebugSupport
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_eclipsesource_v8_V8
 * Method:    _processDebugMessages
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_com_eclipsesource_v8_V8__1processDebugMessages
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_eclipsesource_v8_V8
 * Method:    _arrayGetDoubles
 * Signature: (JJII)[D
 */
JNIEXPORT jdoubleArray JNICALL Java_com_eclipsesource_v8_V8__1arrayGetDoubles__JJII
  (JNIEnv *, jobject, jlong, jlong, jint, jint);

/*
 * Class:     com_eclipsesource_v8_V8
 * Method:    _arrayGetIntegers
 * Signature: (JJII)[I
 */
JNIEXPORT jintArray JNICALL Java_com_eclipsesource_v8_V8__1arrayGetIntegers__JJII
  (JNIEnv *, jobject, jlong, jlong, jint, jint);

/*
 * Class:     com_eclipsesource_v8_V8
 * Method:    _arrayGetBooleans
 * Signature: (JJII)[Z
 */
JNIEXPORT jbooleanArray JNICALL Java_com_eclipsesource_v8_V8__1arrayGetBooleans__JJII
  (JNIEnv *, jobject, jlong, jlong, jint, jint);

/*
 * Class:     com_eclipsesource_v8_V8
 * Method:    _arrayGetStrings
 * Signature: (JJII)[Ljava/lang/String;
 */
JNIEXPORT jobjectArray JNICALL Java_com_eclipsesource_v8_V8__1arrayGetStrings__JJII
  (JNIEnv *, jobject, jlong, jlong, jint, jint);

/*
 * Class:     com_eclipsesource_v8_V8
 * Method:    _arrayGetIntegers
 * Signature: (JJII[I)I
 */
JNIEXPORT jint JNICALL Java_com_eclipsesource_v8_V8__1arrayGetIntegers__JJII_3I
  (JNIEnv *, jobject, jlong, jlong, jint, jint, jintArray);

/*
 * Class:     com_eclipsesource_v8_V8
 * Method:    _arrayGetDoubles
 * Signature: (JJII[D)I
 */
JNIEXPORT jint JNICALL Java_com_eclipsesource_v8_V8__1arrayGetDoubles__JJII_3D
  (JNIEnv *, jobject, jlong, jlong, jint, jint, jdoubleArray);

/*
 * Class:     com_eclipsesource_v8_V8
 * Method:    _arrayGetBooleans
 * Signature: (JJII[Z)I
 */
JNIEXPORT jint JNICALL Java_com_eclipsesource_v8_V8__1arrayGetBooleans__JJII_3Z
  (JNIEnv *, jobject, jlong, jlong, jint, jint, jbooleanArray);

/*
 * Class:     com_eclipsesource_v8_V8
 * Method:    _arrayGetStrings
 * Signature: (JJII[Ljava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_com_eclipsesource_v8_V8__1arrayGetStrings__JJII_3Ljava_lang_String_2
  (JNIEnv *, jobject, jlong, jlong, jint, jint, jobjectArray);

/*
 * Class:     com_eclipsesource_v8_V8
 * Method:    _terminateExecution
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_com_eclipsesource_v8_V8__1terminateExecution
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_eclipsesource_v8_V8
 * Method:    _getGlobalObject
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_com_eclipsesource_v8_V8__1getGlobalObject
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_eclipsesource_v8_V8
 * Method:    _getBuildID
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_com_eclipsesource_v8_V8__1getBuildID
  (JNIEnv *, jobject);

#ifdef __cplusplus
}
#endif
#endif
