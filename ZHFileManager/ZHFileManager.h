//
//  ZHFileManager.h
//  ZHFileManager
//
//  Created by 郑晗 on 2019/4/3.
//  Copyright © 2019年 郑晗. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
NS_ASSUME_NONNULL_BEGIN

@interface ZHFileManager : NSObject

#pragma mark -- 沙盒目录相关路径获取

/**
 沙盒主目录路径
 @return 路径
 */
+ (NSString *)sandboxHomePath;

/**
 Documents路径
 @return 路径
 */
+ (NSString *)sandboxDocumentsPath;

/**
 Library路径
 @return 路径
 */
+ (NSString *)sandboxLibraryPath;

// 沙盒中Libarary/Preferences的目录路径

/**
 Libarary/Preferences路径
 @return 路径
 */
+ (NSString *)sandboxLibraryPreferencesPath;

/**
 Library/Caches路径
 @return 路径
 */

+ (NSString *)sandboxLibraryCachesPath;

/**
 tmp路径
 @return 路径
 */
+ (NSString *)sandboxTmpPath;

#pragma mark -- 获取文件名

/**
 获取文件名
 
 @param path 文件路径
 @param suffix 是否带有后缀
 @return 文件名
 */
+ (NSString *)fileNameAtPath:(NSString *)path suffix:(BOOL)suffix;

/**
 获取文件所在的文件夹路径
 
 @param path 文件路径
 @return 文件夹路径
 */
+ (NSString *)directoryAtPath:(NSString *)path;

/**
 获取文件扩展类型
 
 @param path 文件路径
 @return 扩展类型
 */
+ (NSString *)suffixAtPath:(NSString *)path;

#pragma mark -- 获取文件属性

/**
 获取文件某个属性
 
 @param path 文件路径
 @param key key
 @return 返回属性
 */
+ (id)attributeOfItemAtPath:(NSString *)path forKey:(NSString *)key;

/**
 获取文件某个属性,并返回错误信息
 
 @param path 文件路径
 @param key key
 @param error 错误信息
 @return 返回属性
 */
+ (id)attributeOfItemAtPath:(NSString *)path forKey:(NSString *)key error:(NSError **)error;

/**
 获取文件多个属性（集合）
 
 @param path 文件路径
 @return 返回属性集合
 */
+ (NSDictionary *)attributesOfItemAtPath:(NSString *)path;

/**
 获取文件多个属性（集合）,并返回错误信息
 
 @param path 文件路径
 @param error 错误信息
 @return 返回属性集合
 */
+ (NSDictionary *)attributesOfItemAtPath:(NSString *)path error:(NSError **)error;

#pragma mark -- 获取文件(夹)大小

/**
 获取目录大小
 
 @param path 文件路径
 @return 文件大小
 */
+ (NSNumber *)sizeOfItemAtPath:(NSString *)path;

/**
 获取目录大小，并返回错误信息
 
 @param path 文件路径
 @param error 错误信息
 @return 文件大小
 */
+ (NSNumber *)sizeOfItemAtPath:(NSString *)path error:(NSError **)error;

/**
 获取文件大小
 
 @param path 文件路径
 @return 文件大小
 */
+ (NSNumber *)sizeOfFileAtPath:(NSString *)path;

/**
 获取文件大小，并返回错误信息
 
 @param path 文件路径
 @param error 错误信息
 @return 文件大小
 */
+ (NSNumber *)sizeOfFileAtPath:(NSString *)path error:(NSError **)error;

/**
 获取文件夹大小
 
 @param path 文件夹路径
 @return 文件夹大小
 */
+ (NSNumber *)sizeOfDirectoryAtPath:(NSString *)path;

/**
 获取文件夹大小，并返回错误信息
 
 @param path 文件夹路径
 @param error 错误信息
 @return 文件夹大小
 */
+ (NSNumber *)sizeOfDirectoryAtPath:(NSString *)path error:(NSError **)error;

/**
 获取目录大小，返回格式化后的数值
 
 @param path 目录路径
 @return 数值字符串
 */
+ (NSString *)sizeFormattedOfItemAtPath:(NSString *)path;

/**
 获取目录大小，返回格式化后的数值，并返回错误信息
 
 @param path 目录路径
 @param error 错误信息
 @return 数值字符串
 */
+ (NSString *)sizeFormattedOfItemAtPath:(NSString *)path error:(NSError **)error;

/**
 获取文件大小，返回格式化后的数值
 
 @param path 文件路径
 @return 数值字符串
 */
+ (NSString *)sizeFormattedOfFileAtPath:(NSString *)path;

/**
 获取文件大小，返回格式化后的数值，并返回错误信息
 
 @param path 文件路径
 @param error 错误信息
 @return 数值字符串
 */
+ (NSString *)sizeFormattedOfFileAtPath:(NSString *)path error:(NSError **)error;

/**
 获取文件夹大小，返回格式化后的数值
 
 @param path 文件夹路径
 @return 数值字符串
 */
+ (NSString *)sizeFormattedOfDirectoryAtPath:(NSString *)path;
// 获取文件夹大小，返回格式化后的数值(错误信息error)

/**
 获取文件夹大小，返回格式化后的数值，并返回错误信息
 
 @param path 文件夹路径
 @param error 错误信息
 @return 数值字符串
 */
+ (NSString *)sizeFormattedOfDirectoryAtPath:(NSString *)path error:(NSError **)error;

#pragma mark -- 获取文件创建修改时间

/**
 获取文件创建时间
 
 @param path 文件路径
 @return 文件创建时间
 */
+ (NSDate *)creationDateOfItemAtPath:(NSString *)path;

/**
 获取文件创建时间，并返回错误信息
 
 @param path 文件路径
 @param error 错误信息
 @return 文件创建时间
 */
+ (NSDate *)creationDateOfItemAtPath:(NSString *)path error:(NSError **)error;
// 获取文件修改时间

/**
 获取文件修改时间
 
 @param path 文件路径
 @return 文件创建时间
 */
+ (NSDate *)modificationDateOfItemAtPath:(NSString *)path;

/**
 获取文件修改时间，并返回错误信息
 
 @param path 文件路径
 @param error 错误信息
 @return 文件创建时间
 */
+ (NSDate *)modificationDateOfItemAtPath:(NSString *)path error:(NSError **)error;

#pragma mark -- 一些目录的判断

/**
 判断文件路径是否存在
 
 @param path 文件路径
 @return YES 存在 NO 不存在
 */
+ (BOOL)isExistsAtPath:(NSString *)path;

/**
 判断文件路径下是否为空，满足文件大小为0，或者没有子文件
 
 @param path 文件路径
 @return YES 为空 NO 不为空
 */
+ (BOOL)isEmptyItemAtPath:(NSString *)path;

/**
 判断文件路径下是否为空，并返回错误信息
 
 @param path 文件路径
 @param error 错误信息
 @return YES 为空 NO 不为空
 */
+ (BOOL)isEmptyItemAtPath:(NSString *)path error:(NSError **)error;

/**
 判断此路径是否是文件夹
 
 @param path 文件路径
 @return YES 是文件夹 NO 不是文件夹
 */
+ (BOOL)isDirectoryAtPath:(NSString *)path;

/**
 判断此路径是否是文件夹，并返回错误信息
 
 @param path 文件路径
 @param error 错误信息
 @return YES 是文件夹 NO 不是文件夹
 */
+ (BOOL)isDirectoryAtPath:(NSString *)path error:(NSError **)error;

/**
 判断此路径是否是文件
 
 @param path 文件路径
 @return YES 是文件 NO 不是文件
 */
+ (BOOL)isFileAtPath:(NSString *)path;

/**
 判断此路径是否是文件，并返回错误信息
 
 @param path 文件路径
 @param error 错误信息
 @return YES 是文件 NO 不是文件
 */
+ (BOOL)isFileAtPath:(NSString *)path error:(NSError **)error;

/**
 判断目录是否可以执行
 
 @param path 文件路径
 @return YES 可以执行 NO 不可以执行
 */
+ (BOOL)isExecutableItemAtPath:(NSString *)path;

/**
 判断目录是否可读
 
 @param path 文件路径
 @return YES 可读 NO 不可读
 */
+ (BOOL)isReadableItemAtPath:(NSString *)path;

/**
 判断目录是否可写
 
 @param path 文件路径
 @return YES 可写 NO 不可写
 */
+ (BOOL)isWritableItemAtPath:(NSString *)path;

#pragma mark -- 文件遍历

/**
 文件遍历
 
 @param path 文件夹路径
 @param deep 是否深遍历 (浅遍历：返回当前目录下的所有文件和文件夹；深遍历：返回当前目录下及子目录下的所有文件和文件夹)
 @return 遍历结果数组
 */
+ (NSArray *)listFilesInDirectoryAtPath:(NSString *)path deep:(BOOL)deep;

#pragma mark -- 创建文件(夹)

/**
 创建文件夹
 
 @param path 创建文件夹路径
 @return YES 成功 NO 失败
 */
+ (BOOL)createDirectoryAtPath:(NSString *)path;

/**
 创建文件夹,并返回错误信息
 
 @param path 创建文件夹路径
 @param error 错误信息
 @return YES 成功 NO 失败
 */
+ (BOOL)createDirectoryAtPath:(NSString *)path error:(NSError **)error;

/**
 创建文件
 
 @param path 创建文件路径
 @return YES 成功 NO 失败
 */
+ (BOOL)createFileAtPath:(NSString *)path;

/**
 创建文件夹,并返回错误信息
 
 @param path 创建文件路径
 @param error 错误信息
 @return YES 成功 NO 失败
 */
+ (BOOL)createFileAtPath:(NSString *)path error:(NSError **)error;

/**
 创建文件，是否覆盖
 
 @param path 创建文件路径
 @param overwrite 是否覆盖
 @return YES 成功 NO 失败
 */
+ (BOOL)createFileAtPath:(NSString *)path overwrite:(BOOL)overwrite;

/**
 创建文件，是否覆盖,并返回错误信息
 
 @param path 创建文件路径
 @param overwrite 是否覆盖
 @param error 错误信息
 @return YES 成功 NO 失败
 */
+ (BOOL)createFileAtPath:(NSString *)path overwrite:(BOOL)overwrite error:(NSError **)error;

/**
 创建文件，写入文件内容
 
 @param path 文件路径
 @param content 文件内容
 @return YES 成功 NO 失败
 */
+ (BOOL)createFileAtPath:(NSString *)path content:(NSObject *)content;

/**
 创建文件，写入文件内容,并返回错误信息
 
 @param path 文件路径
 @param content 文件内容
 @param error 错误信息
 @return YES 成功 NO 失败
 */
+ (BOOL)createFileAtPath:(NSString *)path content:(NSObject *)content error:(NSError **)error;

/**
 创建文件，写入文件内容,增加参数是否覆盖
 
 @param path 文件路径
 @param content 文件内容
 @param overwrite 是否覆盖
 @return YES 成功 NO 失败
 */
+ (BOOL)createFileAtPath:(NSString *)path content:(NSObject *)content overwrite:(BOOL)overwrite;

/**
 创建文件，写入文件内容,增加参数是否覆盖,并返回错误信息
 
 @param path 文件路径
 @param content 文件内容
 @param overwrite 是否覆盖
 @param error 错误信息
 @return YES 成功 NO 失败
 */
+ (BOOL)createFileAtPath:(NSString *)path content:(NSObject *)content overwrite:(BOOL)overwrite error:(NSError **)error;

#pragma mark -- 删除文件(夹)

/**
 删除文件
 
 @param path 文件路径
 @return YES 成功 NO 失败
 */
+ (BOOL)removeItemAtPath:(NSString *)path;
// 删除文件(错误信息error)

/**
 删除文件，并返回错误信息
 
 @param path 文件路径
 @param error 错误信息
 @return YES 成功 NO 失败
 */
+ (BOOL)removeItemAtPath:(NSString *)path error:(NSError **)error;

#pragma mark -- 复制文件(夹)

/**
 拷贝文件到到另一个目录
 
 @param path 原文件路径
 @param toPath 目标路径
 @return YES 成功 NO 失败
 */
+ (BOOL)copyItemAtPath:(NSString *)path toPath:(NSString *)toPath;

/**
 拷贝文件到到另一个目录，并返回错误信息
 
 @param path 原文件路径
 @param toPath 目标路径
 @param error 错误信息
 @return YES 成功 NO 失败
 */
+ (BOOL)copyItemAtPath:(NSString *)path toPath:(NSString *)toPath error:(NSError **)error;

/**
 拷贝文件到到另一个目录，增加参数是否覆盖
 
 @param path 原文件路径
 @param toPath 目标路径
 @param overwrite 是否覆盖
 @return YES 成功 NO 失败
 */
+ (BOOL)copyItemAtPath:(NSString *)path toPath:(NSString *)toPath overwrite:(BOOL)overwrite;

/**
 拷贝文件到到另一个目录，增加参数是否覆盖，并返回错误信息
 
 @param path 原文件路径
 @param toPath 目标路径
 @param overwrite 是否覆盖
 @param error 错误信息
 @return YES 成功 NO 失败
 */
+ (BOOL)copyItemAtPath:(NSString *)path toPath:(NSString *)toPath overwrite:(BOOL)overwrite error:(NSError **)error;

#pragma mark -- 移动文件(夹)

/**
 移动文件到到另一个目录
 
 @param path 原文件路径
 @param toPath 目标路径
 @return YES 成功 NO 失败
 */
+ (BOOL)moveItemAtPath:(NSString *)path toPath:(NSString *)toPath;
/**
 移动文件到到另一个目录，并返回错误信息
 
 @param path 原文件路径
 @param toPath 目标路径
 @param error 错误信息
 @return YES 成功 NO 失败
 */
+ (BOOL)moveItemAtPath:(NSString *)path toPath:(NSString *)toPath error:(NSError **)error;
/**
 移动文件到到另一个目录，增加参数是否覆盖
 
 @param path 原文件路径
 @param toPath 目标路径
 @param overwrite 是否覆盖
 @return YES 成功 NO 失败
 */
+ (BOOL)moveItemAtPath:(NSString *)path toPath:(NSString *)toPath overwrite:(BOOL)overwrite;
/**
 移动文件到到另一个目录，增加参数是否覆盖，并返回错误信息
 
 @param path 原文件路径
 @param toPath 目标路径
 @param overwrite 是否覆盖
 @param error 错误信息
 @return YES 成功 NO 失败
 */
+ (BOOL)moveItemAtPath:(NSString *)path toPath:(NSString *)toPath overwrite:(BOOL)overwrite error:(NSError **)error;

#pragma mark -- 写入文件内容

/**
 写入文件内容
 
 @param path 写入文件路径
 @param content 内容
 @return YES 成功 NO 失败
 */
+ (BOOL)writeFileAtPath:(NSString *)path content:(NSObject *)content;
// 写入文件内容(错误信息error)

/**
 写入文件内容，并返回错误信息
 
 @param path 写入文件路径
 @param content 内容
 @param error 错误信息
 @return YES 成功 NO 失败
 */
+ (BOOL)writeFileAtPath:(NSString *)path content:(NSObject *)content error:(NSError **)error;

@end

NS_ASSUME_NONNULL_END
