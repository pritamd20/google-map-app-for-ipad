//
//  Created by preetham d'souza on 7/15/11.
//  
//  No Copyright 2011 . No rights reserved.
//

#import <Foundation/Foundation.h>
#import <MapKit/MapKit.h>

@interface CustomPlacemark : NSObject<MKAnnotation> {
	CLLocationCoordinate2D coordinate;
	MKCoordinateRegion coordinateRegion;
	NSString *title;
	NSString *subtitle;
}
@property (nonatomic, readonly) CLLocationCoordinate2D coordinate;
@property (nonatomic, readonly) MKCoordinateRegion coordinateRegion;
@property (nonatomic, retain) NSString *title;
@property (nonatomic, retain) NSString *subtitle;

-(id)initWithRegion:(MKCoordinateRegion) coordRegion;
@end
