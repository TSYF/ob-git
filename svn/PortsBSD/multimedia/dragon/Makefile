# $FreeBSD: head/multimedia/dragon/Makefile 509000 2019-08-15 15:38:52Z adridg $

PORTNAME=	dragon
DISTVERSION=	${KDE_APPLICATIONS_VERSION}
CATEGORIES=	multimedia kde kde-applications
PKGNAMESUFFIX=	-player

MAINTAINER=	kde@FreeBSD.org
COMMENT=	KDE multimedia player with a focus on simplicity

LICENSE=	GPLv2

USES=		cmake compiler:c++11-lang desktop-file-utils gettext kde:5 qt:5 tar:xz
USE_KDE=	auth codecs completion config configwidgets coreaddons crash \
		dbusaddons doctools ecm  kio service sonnet textwidgets i18n \
		iconthemes jobwidgets notifications parts solid widgetsaddons \
		windowsystem xmlgui
USE_QT=		concurrent core dbus gui network phonon4 widgets xml \
		buildtools_build qmake_build

OPTIONS_DEFINE=	DOCS

.include <bsd.port.mk>
