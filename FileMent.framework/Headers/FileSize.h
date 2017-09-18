//
//  FileSize.h
//  BS
//
//  Created by mc on 16/8/27.
//  Copyright © 2016年 mc. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface FileSize : NSObject

//获取Documents文件夹路径
+(NSString*)getDocumentsPath;

/**
 删除某个文件夹

 @param filePath 文件夹名称
 */
+(void)removeFilePath:(NSString *)filePath;
//单个文件的大小
+(long long)fileSizeAtPath:(NSString*)filePath;


/**
 在某个文件夹下创建、获取文件夹

 @param filePath 本地路径
 @param file 文件夹名称
 @return <#return value description#>
 */
+(NSString *)createPath:(NSString *)filePath createFile:(NSString *)file;

//计算某个文件夹的大小返回(MB)
+(float )folderSizeAtPath:(NSString*)folderPath;


/**
 获取某个文件夹下的文件内容

 @param filePath 本地路径
 @param file 文件名+后缀
 @return <#return value description#>
 */
+(id)attainAtPath:(NSString *)filePath attainFile:(NSString *)file;

/**
 新建的文件必须写入东西才可以有你想要的文件
 某个文件夹下的写入、修改文件内容
 
  NSDictionary *dic = [[NSDictionary alloc]initWithObjectsAndKeys:@1,@"22", nil];
                                    或者
  NSDictionary *dic = [[NSDictionary alloc]init];
 
 [FileSize reviseAtPath:[self getDocumentsPath] reviseFile:[NSString stringWithFormat:@"2345778.plist"] test:dic];
 */
+(void)reviseAtPath:(NSString *)filePath reviseFile:(NSString *)file test:(id)text;


/**
 获取文件夹下的多个文件

 @param filePath 本地路径
 @param file 文件夹
 @return <#return value description#>
 */
+(NSArray *)acquisitionAtPath:(NSString *)filePath acquisitionFile:(NSString *)file;
@end
