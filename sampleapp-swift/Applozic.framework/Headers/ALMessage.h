//
//  ALMessage.h
//  ALChat
//
//  Copyright (c) 2015 AppLozic. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/NSManagedObject.h>
#import "ALJson.h"
#import "ALFileMetaInfo.h"

#define ALMESSAGE_CONTENT_LOCATION 2
#define ALMESSAGE_CONTENT_ATTACHMENT 1
#define ALMESSAGE_CONTENT_CAMERA_RECORDING 9
#define ALMESSAGE_CONTENT_AUDIO 8


@interface ALMessage : ALJson

@property (nonatomic, copy) NSString * key;

@property (nonatomic, copy) NSString * pairedMessageKeyString;

@property (nonatomic, copy) NSString * deviceKey;

@property (nonatomic, copy) NSString * userKey;

@property (nonatomic, copy) NSString * to;

@property (nonatomic, copy) NSString * message;

@property (nonatomic, assign) BOOL sent;

@property (nonatomic, assign) BOOL sendToDevice;

@property (nonatomic, assign) BOOL shared;

@property (nonatomic, copy) NSNumber * createdAtTime;

@property (nonatomic, copy) NSString * type;

@property (nonatomic, copy) NSString * source;

@property (nonatomic, copy) NSString * contactIds;

@property (nonatomic, assign) BOOL storeOnDevice;

@property (nonatomic,retain) ALFileMetaInfo * fileMeta;

@property (nonatomic,assign) BOOL read;

@property (nonatomic,retain) NSString * imageFilePath;

@property (nonatomic,assign) BOOL inProgress;

@property (nonatomic, strong)NSString *fileMetaKey;

@property (nonatomic, assign) BOOL isUploadFailed;

@property (nonatomic,assign) BOOL delivered;

@property(nonatomic,assign)BOOL sentToServer;

@property(nonatomic,copy) NSManagedObjectID * msgDBObjectId;

@property(nonatomic,assign) NSString *pairedMessageKey;

@property(nonatomic,assign) long messageId;

@property(nonatomic,retain)NSString * applicationId;

@property(nonatomic) short contentType;

@property (nonatomic, copy) NSNumber *groupId;

@property(nonatomic,copy) NSNumber *conversationId;

-(NSString *)getCreatedAtTime:(BOOL)today;

-(id)initWithDictonary:(NSDictionary*)messageDictonary;

-(BOOL)isDownloadRequire;
-(BOOL)isUploadRequire;

-(NSString *)getCreatedAtTimeChat:(BOOL)today;
-(NSNumber *)getGroupId;

@property (nonatomic,assign) BOOL deleted;
@end