// Generated by the protocol buffer compiler.  DO NOT EDIT!

#import <ProtocolBuffers/ProtocolBuffers.h>

// @@protoc_insertion_point(imports)

@class Family;
@class FamilyBuilder;
@class Person;
@class PersonBuilder;



@interface MyRoot : NSObject {
}
+ (PBExtensionRegistry*) extensionRegistry;
+ (void) registerAllExtensions:(PBMutableExtensionRegistry*) registry;
@end

#define Person_age @"age"
#define Person_name @"name"
@interface Person : PBGeneratedMessage<GeneratedMessageProtocol> {
@private
  BOOL hasAge_:1;
  BOOL hasName_:1;
  SInt32 age;
  NSString* name;
}
- (BOOL) hasAge;
- (BOOL) hasName;
@property (readonly) SInt32 age;
@property (readonly, strong) NSString* name;

+ (instancetype) defaultInstance;
- (instancetype) defaultInstance;

- (BOOL) isInitialized;
- (void) writeToCodedOutputStream:(PBCodedOutputStream*) output;
- (PersonBuilder*) builder;
+ (PersonBuilder*) builder;
+ (PersonBuilder*) builderWithPrototype:(Person*) prototype;
- (PersonBuilder*) toBuilder;

+ (Person*) parseFromData:(NSData*) data;
+ (Person*) parseFromData:(NSData*) data extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (Person*) parseFromInputStream:(NSInputStream*) input;
+ (Person*) parseFromInputStream:(NSInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (Person*) parseFromCodedInputStream:(PBCodedInputStream*) input;
+ (Person*) parseFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
@end

@interface PersonBuilder : PBGeneratedMessageBuilder {
@private
  Person* resultPerson;
}

- (Person*) defaultInstance;

- (PersonBuilder*) clear;
- (PersonBuilder*) clone;

- (Person*) build;
- (Person*) buildPartial;

- (PersonBuilder*) mergeFrom:(Person*) other;
- (PersonBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input;
- (PersonBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;

- (BOOL) hasAge;
- (SInt32) age;
- (PersonBuilder*) setAge:(SInt32) value;
- (PersonBuilder*) clearAge;

- (BOOL) hasName;
- (NSString*) name;
- (PersonBuilder*) setName:(NSString*) value;
- (PersonBuilder*) clearName;
@end

#define Family_person @"person"
@interface Family : PBGeneratedMessage<GeneratedMessageProtocol> {
@private
  NSMutableArray * personArray;
}
@property (readonly, strong) NSArray<Person*> * person;
- (Person*)personAtIndex:(NSUInteger)index;

+ (instancetype) defaultInstance;
- (instancetype) defaultInstance;

- (BOOL) isInitialized;
- (void) writeToCodedOutputStream:(PBCodedOutputStream*) output;
- (FamilyBuilder*) builder;
+ (FamilyBuilder*) builder;
+ (FamilyBuilder*) builderWithPrototype:(Family*) prototype;
- (FamilyBuilder*) toBuilder;

+ (Family*) parseFromData:(NSData*) data;
+ (Family*) parseFromData:(NSData*) data extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (Family*) parseFromInputStream:(NSInputStream*) input;
+ (Family*) parseFromInputStream:(NSInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (Family*) parseFromCodedInputStream:(PBCodedInputStream*) input;
+ (Family*) parseFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
@end

@interface FamilyBuilder : PBGeneratedMessageBuilder {
@private
  Family* resultFamily;
}

- (Family*) defaultInstance;

- (FamilyBuilder*) clear;
- (FamilyBuilder*) clone;

- (Family*) build;
- (Family*) buildPartial;

- (FamilyBuilder*) mergeFrom:(Family*) other;
- (FamilyBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input;
- (FamilyBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;

- (NSMutableArray<Person*> *)person;
- (Person*)personAtIndex:(NSUInteger)index;
- (FamilyBuilder *)addPerson:(Person*)value;
- (FamilyBuilder *)setPersonArray:(NSArray<Person*> *)array;
- (FamilyBuilder *)clearPerson;
@end


// @@protoc_insertion_point(global_scope)