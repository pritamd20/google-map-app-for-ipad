//
//  Created by preetham d'souza on 7/15/11.
//   No Copyright 2011 . No rights reserved.
//

#import "CustomPlacemark.h"


@implementation CustomPlacemark
@synthesize title, subtitle, coordinate, coordinateRegion;

-(id)initWithRegion:(MKCoordinateRegion) coordRegion {
	self = [super init];
	
	if (self != nil) {
		coordinate = coordRegion.center;
		coordinateRegion = coordRegion;
	}
	
	return self;
}

- (void)dealloc {
	[title release];
	[subtitle release];
	
	[super dealloc];
}
@end
