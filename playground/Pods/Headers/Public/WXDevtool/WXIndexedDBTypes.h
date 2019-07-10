//    
//  WXIndexedDBTypes.h
//  PonyDebuggerDerivedSources
//
//  Generated on 8/23/12
//
//  Licensed to Square, Inc. under one or more contributor license agreements.
//  See the LICENSE file distributed with this work for the terms under
//  which Square, Inc. licenses this file to you.
//
    
#import "WXObject.h"
#import "WXDebugger.h"
#import "WXDynamicDebuggerDomain.h"


@class WXRuntimeRemoteObject;
@class WXIndexedDBKeyPath;


// Security origin with database names.
@interface WXIndexedDBSecurityOriginWithDatabaseNames : WXObject

// Security origin.
// Type: string
@property (nonatomic, strong) NSString *securityOrigin;

// Database names for this origin.
// Type: array
@property (nonatomic, strong) NSArray *databaseNames;

@end


// Database with an array of object stores.
@interface WXIndexedDBDatabaseWithObjectStores : WXObject

// Database name.
// Type: string
@property (nonatomic, strong) NSString *name;

// Database version.
// Type: string
@property (nonatomic, strong) NSString *version;

// Object stores in this database.
// Type: array
@property (nonatomic, strong) NSArray *objectStores;

@end


// Object store.
@interface WXIndexedDBObjectStore : WXObject

// Object store name.
// Type: string
@property (nonatomic, strong) NSString *name;

// Object store key path.
@property (nonatomic, strong) WXIndexedDBKeyPath *keyPath;

// If true, object store has auto increment flag set.
// Type: boolean
@property (nonatomic, strong) NSNumber *autoIncrement;

// Indexes in this object store.
// Type: array
@property (nonatomic, strong) NSArray *indexes;

@end


// Object store index.
@interface WXIndexedDBObjectStoreIndex : WXObject

// Index name.
// Type: string
@property (nonatomic, strong) NSString *name;

// Index key path.
@property (nonatomic, strong) WXIndexedDBKeyPath *keyPath;

// If true, index is unique.
// Type: boolean
@property (nonatomic, strong) NSNumber *unique;

// If true, index allows multiple entries for a key.
// Type: boolean
@property (nonatomic, strong) NSNumber *multiEntry;

@end


// Key.
@interface WXIndexedDBKey : WXObject

// Key type.
// Type: string
@property (nonatomic, strong) NSString *type;

// Number value.
// Type: number
@property (nonatomic, strong) NSNumber *number;

// String value.
// Type: string
@property (nonatomic, strong) NSString *string;

// Date value.
// Type: number
@property (nonatomic, strong) NSNumber *date;

// Array value.
// Type: array
@property (nonatomic, strong) NSArray *array;

@end


// Key range.
@interface WXIndexedDBKeyRange : WXObject

// Lower bound.
@property (nonatomic, strong) WXIndexedDBKey *lower;

// Upper bound.
@property (nonatomic, strong) WXIndexedDBKey *upper;

// If true lower bound is open.
// Type: boolean
@property (nonatomic, strong) NSNumber *lowerOpen;

// If true upper bound is open.
// Type: boolean
@property (nonatomic, strong) NSNumber *upperOpen;

@end


// Data entry.
@interface WXIndexedDBDataEntry : WXObject

// Key.
@property (nonatomic, strong) WXIndexedDBKey *key;

// Primary key.
@property (nonatomic, strong) WXIndexedDBKey *primaryKey;

// Value.
@property (nonatomic, strong) WXRuntimeRemoteObject *value;

@end


// Key path.
@interface WXIndexedDBKeyPath : WXObject

// Key path type.
// Type: string
@property (nonatomic, strong) NSString *type;

// String value.
// Type: string
@property (nonatomic, strong) NSString *string;

// Array value.
// Type: array
@property (nonatomic, strong) NSArray *array;

@end


