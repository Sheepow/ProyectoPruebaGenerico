//
//  testViewController.h
//  ProyectoPruebaGenerico
//
//  Created by Daniel Márquez on 6/4/14.
//  Copyright (c) 2014 Eduardo Valenzuela. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "FirstVC.h"
#import "SecondVC.h"
#import "ThirdVC.h"

@interface testViewController : UIViewController<UITabBarControllerDelegate>
{
    IBOutlet UIButton * btnHello;
}
@property (retain, nonatomic) IBOutlet UIButton *btnHello;


@property NSInteger count;
//-(IBAction)button:(id)sender;
@end
