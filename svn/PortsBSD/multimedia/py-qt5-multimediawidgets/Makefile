# $FreeBSD: head/multimedia/py-qt5-multimediawidgets/Makefile 567825 2021-03-08 06:49:17Z lbartoletti $

PORTNAME=	multimediawidgets
CATEGORIES=	multimedia devel python

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Python bindings for the Qt5 toolkit, QtMultimediaWidgets module

CONFIGURE_ARGS=	--enable QtMultimediaWidgets
PYQT_DIST=	yes

USES=		gl python:3.5+ pyqt:5 qt:5
USE_GL=		gl
USE_PYQT=	sip_build core_run multimedia_run widgets_run
USE_PYTHON=	concurrent flavors py3kplist
USE_QT=		core gui multimedia network widgets qmake_build

OPTIONS_DEFINE=	API DEBUG
OPTIONS_DEFAULT=API
OPTIONS_SUB=	yes

API_DESC=		Install QtMultimedia API for QScintilla2
API_CONFIGURE_ON=	--qsci-api --qsci-api-destdir=${PYQT_APIDIR}
API_CONFIGURE_OFF=	--no-qsci-api
API_LIB_DEPENDS=	libqscintilla2_qt5.so:devel/qscintilla2-qt5
DEBUG_CONFIGURE_ON=	--debug --trace

post-install:
	${STRIP_CMD} ${STAGEDIR}${PYTHONPREFIX_SITELIBDIR}/PyQt5/QtMultimediaWidgets.so

.include <bsd.port.mk>
