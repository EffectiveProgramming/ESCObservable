#import <Foundation/Foundation.h>

@interface ESCObserversProxy : NSProxy

- (void)escAddObserver:(id)observer;
- (void)escAddObserver:(id)observer forSelector:(SEL)selector forwardingToSelector:(SEL)forwardSelector;
- (void)escRegisterObserverProtocol:(Protocol *)observerProtocol;

@end
