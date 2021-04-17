/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class net_olddoctor_popFilesystem_daemon_lib_FileWatcher */

#ifndef _Included_net_olddoctor_popFilesystem_daemon_lib_FileWatcher
#define _Included_net_olddoctor_popFilesystem_daemon_lib_FileWatcher
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     net_olddoctor_popFilesystem_daemon_lib_FileWatcher
 * Method:    createFileWatcherNative
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_net_olddoctor_popFilesystem_daemon_lib_FileWatcher_createFileWatcherNative
  (JNIEnv *, jobject);

/*
 * Class:     net_olddoctor_popFilesystem_daemon_lib_FileWatcher
 * Method:    addFolderNative
 * Signature: (Ljava/lang/String;I)I
 */
JNIEXPORT jint JNICALL Java_net_olddoctor_popFilesystem_daemon_lib_FileWatcher_addFolderNative
  (JNIEnv *, jobject, jstring, jint);

/*
 * Class:     net_olddoctor_popFilesystem_daemon_lib_FileWatcher
 * Method:    rmFolderNative
 * Signature: (II)I
 */
JNIEXPORT jint JNICALL Java_net_olddoctor_popFilesystem_daemon_lib_FileWatcher_rmFolderNative
  (JNIEnv *, jobject, jint, jint);

/*
 * Class:     net_olddoctor_popFilesystem_daemon_lib_FileWatcher
 * Method:    getEventNative
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_net_olddoctor_popFilesystem_daemon_lib_FileWatcher_getEventNative
  (JNIEnv *, jobject, jint);

#ifdef __cplusplus
}
#endif
#endif
