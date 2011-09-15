//
//  Created by preetham d'souza on 7/15/11.
//   No Copyright 2011 . No rights reserved.
//


#import <UIKit/UIKit.h>
#import <MapKit/MapKit.h>
#import "BSForwardGeocoder.h"
#import "BSKmlResult.h"
#import "CustomPlacemark.h"

@interface Forward_GeocodingViewController : UIViewController <MKMapViewDelegate, UISearchBarDelegate, BSForwardGeocoderDelegate> {
	IBOutlet MKMapView *mapView;
	IBOutlet UISearchBar *searchBar;
	BSForwardGeocoder *forwardGeocoder;
}
@property (nonatomic, retain) BSForwardGeocoder *forwardGeocoder;

@end


