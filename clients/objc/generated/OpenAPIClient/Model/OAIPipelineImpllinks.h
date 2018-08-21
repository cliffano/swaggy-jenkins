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


#import "OAILink.h"
@protocol OAILink;
@class OAILink;



@protocol OAIPipelineImpllinks
@end

@interface OAIPipelineImpllinks : OAIObject


@property(nonatomic) OAILink* runs;

@property(nonatomic) OAILink* self;

@property(nonatomic) OAILink* queue;

@property(nonatomic) OAILink* actions;

@property(nonatomic) NSString* _class;

@end
