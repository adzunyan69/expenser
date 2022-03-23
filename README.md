# Expenser

## Description

The repository will contain source code for *application/frontend part/backend part/documentation.*

The purpose of software is offer a way to deploy own application for expense management. 

I suppose the project will be consist of two parts:

- Backend part: source code for data management (connection with custom database, retrieving data, sending data to frontend part using, maybe, unsecured & uncrypted packages across network (because I have no knowledge at cryptography and security protocols)). 
- Frontend part: source code for client-oriented application. The app will be consist of some GUI and queries to backend part for data to show.

I am considering two or three ways for offline/online modes of application:

1. The backend part with two modes. Offline mode assumes that database is located at local storage and works with fronted part as always. This way need to way for setup mode for backend from client-part. And there are useless network connection at local device...
2. The frontend part with two modes. Offline mode assumes that client-part uses backend-class/other source code for management with local database. Online mode assumes that client part works "as always" just sending query to backend part and showing retrieved data.
3. The software only with offline-mode functions. 

Current status: *paper/brain work...*



Temp architecture for online-offline modes:

*![ExpenserArchitecture](doc\ExpenserArchitecture.jpg)*
