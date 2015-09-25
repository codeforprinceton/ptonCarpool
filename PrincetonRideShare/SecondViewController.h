//
//  SecondViewController.h
//  PrincetonRideShare
//
//  Created by Peter B Kramer on 6/6/15.
//  Copyright (c) 2015 Peter B Kramer. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <MapKit/MapKit.h>

@interface SecondViewController : UIViewController<MKMapViewDelegate>{
    
    IBOutlet MKMapView *mapIt;
    IBOutlet UILabel *timeBetween;
    IBOutlet UIDatePicker *fromTime;
    IBOutlet UIDatePicker *toTime;
    IBOutlet UIButton *cancelReturn;
    IBOutlet UILabel *tapToSet;
    IBOutlet UIButton *resetA;
    IBOutlet UIButton *resetB;
    IBOutlet UIButton *arriveTimes;
    IBOutlet UIButton *leaveTimes;
    IBOutlet UISegmentedControl *myCarOrYoursControl;
    IBOutlet UIButton *Monday;
    IBOutlet UIButton *Tuesday;
    IBOutlet UIButton *Wednesday;
    IBOutlet UIButton *Thursday;
    IBOutlet UIButton *Friday;
    IBOutlet UIButton *Saturday;
    IBOutlet UIButton *Sunday;
    IBOutlet UIView *containingView;
    IBOutlet UISegmentedControl *rideSelector;
    IBOutlet UIButton *deleteEntry;
    IBOutlet UIButton *showHome;
    IBOutlet UIButton *showWork;
    IBOutlet UIButton *matchRide;
    
    
   
    
}

-(void)getParameters:(NSMutableDictionary *)theParameters;



@end

