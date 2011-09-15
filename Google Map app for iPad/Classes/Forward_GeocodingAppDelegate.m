//
//  Created by preetham d'souza on 7/15/11.
//   No Copyright 2011 . No rights reserved.
//

#import "Forward_GeocodingAppDelegate.h"
#import "Forward_GeocodingViewController.h"

@implementation Forward_GeocodingAppDelegate

- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions {    
    
    // Override point for customization after app launch    
    [window addSubview:viewController.view];
    [window makeKeyAndVisible];

	return YES;
}


- (void)dealloc {
    [viewController release];
    [window release];
    [super dealloc];
}


@end
