# $FreeBSD: head/devel/okteta/Makefile 569487 2021-03-29 16:59:57Z tcberner $

PORTNAME=	okteta
DISTVERSION=	0.26.6
PORTEPOCH=	1
CATEGORIES=	devel kde
MASTER_SITES=	KDE/stable/${PORTNAME}/${DISTVERSION}/src

MAINTAINER=	kde@FreeBSD.org
COMMENT=	KDE hex editor

USES=		cmake compiler:c++11-lang gettext kde:5 qca qt:5 \
		shared-mime-info tar:xz
USE_KDE=	attica auth bookmarks codecs completion crash \
		config configwidgets coreaddons dbusaddons doctools \
		ecm i18n iconthemes itemviews jobwidgets kcmutils kio \
		newstuff parts service solid sonnet textwidgets \
		widgetsaddons windowsystem xmlgui
USE_QT=		concurrent core dbus declarative designer gui network printsupport  \
		script scripttools widgets xml \
		buildtools_build qmake_build
USE_LDCONFIG=	yes

.include <bsd.port.mk>
