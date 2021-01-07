//
//  ViewController.h
//  todolist
//
//  Created by Jean Claude Ndayisenga on 03/01/2021.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController


@end

@implementation ViewController

- (instancetype)initWithCoder:(NSCoder *)aDecoder {
    if (self = [super initWithCoder:<#aDecoder#>]) {
        UIViewController *todoVC [[UIViewController alloc] init]; 
    }
    return self;
}
- (void)viewDidLoad {
    [super viewDidLoad];
}
 
@end
