//
//  NSURL+MPAdditions.h
//  MoPub
//
//  Copyright (c) 2013 MoPub. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef enum {
    MPMoPubHostCommandUnrecognized,
    MPMoPubHostCommandClose,
    MPMoPubHostCommandFinishLoad,
    MPMoPubHostCommandFailLoad,
    MPMoPubHostCommandPrecacheComplete
} MPMoPubHostCommand;

typedef enum {
    MPMoPubShareHostCommandTweet,
    MPMoPubShareHostCommandUnrecognized
} MPMoPubShareHostCommand;

@interface NSURL (MPAdditions)

- (NSDictionary *)mp_queryAsDictionary;
- (BOOL)mp_hasTelephoneScheme;
- (BOOL)mp_hasTelephonePromptScheme;
- (BOOL)mp_isSafeForLoadingWithoutUserAction;
- (BOOL)mp_isMoPubScheme;
- (MPMoPubHostCommand)mp_mopubHostCommand;
- (BOOL)mp_isMoPubShareScheme;
- (MPMoPubShareHostCommand)mp_MoPubShareHostCommand;

@end
