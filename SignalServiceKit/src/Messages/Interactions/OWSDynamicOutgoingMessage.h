//
//  Copyright (c) 2020 Open Whisper Systems. All rights reserved.
//

#import "TSOutgoingMessage.h"

NS_ASSUME_NONNULL_BEGIN

@class SignalRecipient;

typedef NSData *_Nonnull (^DynamicOutgoingMessageBlock)(SignalRecipient *);

/// This class is only used in debug tools
@interface OWSDynamicOutgoingMessage : TSOutgoingMessage

- (instancetype)initOutgoingMessageWithBuilder:(TSOutgoingMessageBuilder *)outgoingMessageBuilder NS_UNAVAILABLE;

- (instancetype)initWithPlainTextDataBlock:(DynamicOutgoingMessageBlock)block thread:(TSThread *)thread;
- (instancetype)initWithPlainTextDataBlock:(DynamicOutgoingMessageBlock)block
                                 timestamp:(uint64_t)timestamp
                                    thread:(TSThread *)thread;

@end

NS_ASSUME_NONNULL_END
