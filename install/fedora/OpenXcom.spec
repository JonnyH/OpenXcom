Summary:	OpenXcom - an open-source clone of UFO: Enemy Unknown
Name:		openxcom
Version:	1.0.0
Release:	1%{?dist}
License:	GPLv3
Group:		Amusements/Games
URL:		http://www.openxcom.org
Requires:	SDL
Requires:	SDL_mixer
Requires:	SDL_gfx
Requires:	SDL_image
Requires:	yaml-cpp
BuildRequires:	SDL-devel
BuildRequires:	SDL_mixer-devel
BuildRequires:	SDL_gfx-devel
BuildRequires:	SDL_image-devel
BuildRequires:	yaml-cpp-devel
BuildRequires:	cmake
BuildRequires:	gcc-c++
Source0:	http://s2.jonnyh.net/jonny-pub/openxcom-1.0.0.tar.gz


%description
OpenXcom is an open-source clone of the original UFO: Enemy Unknown (X-Com: UFO Defense in USA).
The goal of the project is to bring back the tried and true feel of the original with none of the issues. All the same graphics, sound and gameplay with a brand new codebase written from scratch.

%prep
%setup

%build
%cmake .
make %{?_smp_mflags}

%install
rm -rf $RPM_BUILD_ROOT
make install DESTDIR=$RPM_BUILD_ROOT

%files
%{_bindir}/openxcom
%{_datadir}/openxcom/
