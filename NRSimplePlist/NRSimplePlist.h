//
//  NRSimplePlist.h
//
//  Created by Norman Russo on 29/07/13.
//  Copyright (c) 2013 Norman Russo. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NRSimplePlist : NSObject
//Fetch
+ (id) valuePlist:(NSString *) plistName withKey:(NSString*) key;

//String
+(void) editStringPlist:(NSString *) plistName withKey:(NSString *) key andString:(NSString*) string;

//Number
+(void) editNumberPlist:(NSString *) plistName withKey:(NSString *) key andNumber:(NSNumber*) number;

//Bool
+(void) editBoolPlist:(NSString *) plistName withKey:(NSString *) key andBool:(BOOL) boolValue;

//Data
+(void) editDataPlist:(NSString *) plistName withKey:(NSString *) key andData:(NSData*) data;

//Date
+(void) editDatePlist:(NSString *) plistName withKey:(NSString *) key andDate:(NSDate*) date;

//Array
+(void) editArrayPlist:(NSString *) plistName withKey:(NSString *) key andArray:(NSArray*) array;

//Dictionary
+(void) editDictionaryPlist:(NSString *) plistName withKey:(NSString *) key andDictionary:(NSDictionary *) dictionary;
@end
