## WPPhoto

### Overview

The goal of this project is to assess one's iOS approach to architecting and developing a basic application that interacts with a backend. There are no *right* or *wrong* approaches. The app consists of the following functionality:

* User registration/authentication
    * You don't have to worry about activing a user. Once they are registered then they are automatically activated.
* Photo feed (list view of at least 12 photos)
    * At minimum the list should contain a thumbnail size of your choosing, the date/time the image was taken and the latitude/longitude.
    * When you click on the thumbnail image then the app should take you to a detail screen.
* Photo detail screen
    * This screen should contain the fullsize image and the date/time it was taken.
* The ability to upload images from the users camera roll or taking a picture.

### Backend Model and Endpoints

* Site root: [https://waypaver.fatfractal.com/](https://waypaver.fatfractal.com/)
* Application: [https://waypaver.fatfractal.com/wpphoto/index.html](https://waypaver.fatfractal.com/wpphoto/index.html)
* Photos endpoint: [https://waypaver.fatfractal.com/wpphoto/ff/resources/photos](https://waypaver.fatfractal.com/wpphoto/ff/resources/photos)
    * Returns a list of `WPRPhoto` objects. The object contains two properties: `image` of type NSData and `geo` of type [FFGeolocation](http://www.fatfractal.com/prod/linked_files/FF-IOS-SDK-2103/html/interface_f_f_geo_location.html)

Complete [FatFractal documentation](http://fatfractal.com/prod/docs/)

### Notes

The backend for this project uses [FatFractal](http://www.fatfractal.com/). Their framework is already contained with the project and added to the **pch** file. The project itself is barebones. You can use Storyboards, xibs or straight code. Feel free to hand roll your own custom utilities or use other open source projects. *Please keep them in the External folder*