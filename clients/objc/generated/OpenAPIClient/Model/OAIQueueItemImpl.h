#import <Foundation/Foundation.h>
#import "OAIObject.h"

/**
* Swaggy Jenkins
* Jenkins API clients generated from Swagger / Open API specification
*
* OpenAPI spec version: 1.0.0
* Contact: blah@cliffano.com
*
* NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
* https://openapi-generator.tech
* Do not edit the class manually.
*/





@protocol OAIQueueItemImpl
@end

@interface OAIQueueItemImpl : OAIObject


@property(nonatomic) NSString* _class;

@property(nonatomic) NSNumber* expectedBuildNumber;

@property(nonatomic) NSString* _id;

@property(nonatomic) NSString* pipeline;

@property(nonatomic) NSNumber* queuedTime;

@end
