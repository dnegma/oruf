#import "_BusinessCard.h"

@interface BusinessCard : _BusinessCard {}

+ (BusinessCard *)businessCardFromJSONDictionary:(NSDictionary *)businessCardDictionary;

- (NSString *)fullName;

@end
