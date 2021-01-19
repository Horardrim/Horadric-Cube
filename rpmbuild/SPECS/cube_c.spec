%define debug_package %{nil}

Name:    hm-cube-c
Version: %version
Release: 1%{?dist}
Summary: This package includes the implementation of cube
Group:   Applications/Internet
License: GPL
BuildRoot: %{_tmppath}/%{name}-%{version}-root
Source0: %{name}-%{version}.tar.gz

%description
There is a shared lib in the rpm which have a basic feature of cube

%prep
%setup

%build
make

%install
mkdir -p $RPM_BUILD_ROOT/usr/libs/
mkdir -p $RPM_BUILD_ROOT/usr/include/
install -D %_topdir/BUILD/%{name}-%{version}/hm_cube.h $RPM_BUILD_ROOT/usr/include/cube/hm_cube.h
install -D %_topdir/BUILD/%{name}-%{version}/hm_cube_version.h $RPM_BUILD_ROOT/usr/include/cube/hm_cube_version.h
install -D %_topdir/BUILD/output/libhm-cube-c.so $RPM_BUILD_ROOT/usr/lib/libhm-cube-c.so
install -D %_topdir/BUILD/output/libhm-cube-c.so.%{version} $RPM_BUILD_ROOT/usr/lib/libhm-cube-c.so.%{version}

%clean
rm -rf $RPM_BUILD_ROOT

%post
rm -rf /usr/lib/libhm-cube-c.so
ln -s /usr/lib/libhm-cube-c.so.%{version} /usr/lib/libhm-cube-c.so

%files
/usr/include/cube/*.h
/usr/lib/libhm-cube-c.so.%{version}
/usr/lib/libhm-cube-c.so
