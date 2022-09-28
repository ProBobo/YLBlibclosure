//
//  main.m
//  YLBBlock
//
//  Created by 余礼钵 on 2022/9/28.
//

#import <Foundation/Foundation.h>

int main(int argc, const char * argv[]) {
    @autoreleasepool {
        
        NSObject *objc1 = [[NSObject alloc] init];
//        NSLog(@"外部：%ld",CFGetRetainCount((__bridge CFTypeRef)(objc1)));
        void (^ylbBlock)(void) = ^void {
            NSLog(@"内部: %ld",CFGetRetainCount((__bridge CFTypeRef)(objc1)));
        };
        ylbBlock();
//        NSLog(@"打印 %@", ylbBlock);
    }
    return 0;
}
