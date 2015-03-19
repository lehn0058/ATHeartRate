# ATHeartRate
This project provides a way for iOS devices to detect a user's heart rate using their device's camera. It requires iOS 8 to be running on the device. Usage is quite simple, as only a single class file is needed. An example is as follows:

    self.heartRateDetectionModel = [HeartRateDetectionModel alloc] init];
    self.heartRateDetectionModel.delegate = self;
    [self.heartRateDetectionModel startDetection];

Make sure to add the AVFoundation.framework reference to your project.

The user's heart rate is taken over the course of 30 seconds. A user's current calculated heart rate is sent back to the delegate every 2 seconds on the main thread so the UI can update if desired. Heart rate is currently being processed by the camera at 30 fps, but work is being done to add 60, 120, and 240 fps detection assuming a user's device supports these framerates.

This project was originally developed for use in the iOS app <a href="http://apptechies.com/Home/FitWeightLifting">Fit Weightlifting</a>
