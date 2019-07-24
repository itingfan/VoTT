[33mcommit 0e1b8457682c0cdb58099ca4c4af4e217446cf50[m[33m ([m[1;36mHEAD -> [m[1;32mlipan/UILabel[m[33m)[m
Author: Jason Pan <lipan@microsoft.com>
Date:   Wed Jul 24 00:10:55 2019 -0700

    ui label prototype

[33mcommit 745e854cc4951c56eb31890c2e4286f39362b796[m[33m ([m[1;33mtag: v2.1.0[m[33m, [m[1;31morigin/master[m[33m, [m[1;31morigin/lipan/UILabel[m[33m, [m[1;31morigin/HEAD[m[33m, [m[1;32mmaster[m[33m)[m
Author: Wallace Breza <wallace@breza.me>
Date:   Mon Apr 29 14:39:24 2019 -0700

    Release 2.1.0 (#790)
    
    Updates package version and changelog for 2.1.0 release

[33mcommit 2234c8a0cc9b2c8affb4e7592c97233cdebaa953[m
Author: Wallace Breza <wallace@breza.me>
Date:   Mon Apr 29 14:11:02 2019 -0700

    fix: Updates backwards compat & fixes cntk export image bug (#789)
    
    Fixes an issue where the images exported out of a video file were missing file extension for video projects.

[33mcommit 4d02db421542c8613f84a578431ed7094a6fb854[m
Author: Wallace Breza <wallace@breza.me>
Date:   Mon Apr 29 11:48:27 2019 -0700

    fix: Updates export options for pascalVOC rename (#788)
    
    Adds a check during project load to update the export options if project was using previous pascalVOC name.

[33mcommit 90754dc74b74286def38e53117ec3410001d31c5[m
Author: Lee, Jebum <golee3@gmail.com>
Date:   Tue Apr 30 00:29:16 2019 +0900

    fix: change method for alloc string to buffer (#777)
    
    String.length is not appropriate for calculating buffer size
    when non-alphabet letter is included in content.
    Change the method Buffer.alloc to Buffer.from as directed by the nodejs document.

[33mcommit f29963c89e8191988055c91ab3d3fa1150ba4bcb[m
Author: Jacopo Mangiavacchi <jamangia@microsoft.com>
Date:   Fri Apr 26 15:36:53 2019 -0700

    feat: Add CSV Exporter (#757)
    
    Adds CSV export provider

[33mcommit acbbc86151663b167131973f22c19c50b9213815[m
Author: Tanner Barlow <tanner.barlow12@gmail.com>
Date:   Fri Apr 26 08:20:28 2019 -0700

    fix: Fix display of tag color picker (#782)
    
    Resolves issue of tag color picker not being shown on alt-click or color-click + edit button. Also adds several tests for increased test coverage of tagInput.tsx

[33mcommit 921dbac155047ab7300abe967e40cdff4437cd36[m
Author: Wallace Breza <wallace@breza.me>
Date:   Tue Apr 23 17:46:24 2019 -0700

    feat: Active Learning Updates (#778)
    
    Adds new active learning form
    Moves active learning settings from project settings to here
    Refactored and created activeLearningService

[33mcommit a2ef52c7a400790137931b0dc9520130577cc7e4[m
Author: P.J. Little <peter.jacob.little@gmail.com>
Date:   Tue Apr 23 14:21:44 2019 -0700

    docs: updates to readme and changelog (#781)
    
    Minor updates and corrections to the main readme and changelog.

[33mcommit 25b4aa2dc8b8dca6683c30e50fd71e5d1306a68d[m
Author: Wallace Breza <wallace@breza.me>
Date:   Tue Apr 23 08:42:01 2019 -0700

    Create CODE_OF_CONDUCT.md (#779)
    
    Adds code of conduct

[33mcommit 0429590bec75d10fc36993f6af7345f8ffa53a49[m
Author: Wallace Breza <wallace@breza.me>
Date:   Tue Apr 23 08:41:36 2019 -0700

    doc: Add bug & feature templates (#780)
    
    Adds bug and feature github templates

[33mcommit 48805dcb8548a3abcf18977da04b376fb8c687a2[m
Author: Wallace Breza <wallace@breza.me>
Date:   Fri Apr 19 11:57:13 2019 -0700

    test: Verify tag update/delete project actions

[33mcommit 0b06d6ac5be3c0479b67dc96d4d93c7954efd2e9[m
Author: Wallace Breza <wallace@breza.me>
Date:   Fri Apr 19 09:59:29 2019 -0700

    test: Refactored editor page tests

[33mcommit 3998b6efc82687f09545214afd3dad645cc902a4[m
Author: Wallace Breza <wallace@breza.me>
Date:   Fri Apr 19 09:05:14 2019 -0700

    fix: Refactored project tag/delete updates

[33mcommit 4a0dcb29058c86d9f0ba9cdaa5b2728a41758dba[m
Author: Tanner Barlow <tanner.barlow12@gmail.com>
Date:   Tue Apr 16 07:25:56 2019 -0700

    Dummy commit to kick off build again

[33mcommit 354623ec218572bd54942cd4eb5e7065c2827405[m
Author: Tanner Barlow <tanner.barlow12@gmail.com>
Date:   Tue Apr 16 07:14:28 2019 -0700

    Lint fixes

[33mcommit 8b34db5724aea229ede1816603c1de79f65e8630[m
Author: Tanner Barlow <tanner.barlow12@gmail.com>
Date:   Tue Apr 16 07:13:02 2019 -0700

    Clean up and docs

[33mcommit bbd83a4df5343d4f26aeb7f06e1cb42b8cfaf561[m
Author: Tanner Barlow <tanner.barlow12@gmail.com>
Date:   Tue Apr 16 07:06:00 2019 -0700

    Fix tag removal test for editor page

[33mcommit 5b4610b3d9e9f6d64a0ff82a9313cc0dad09c1c3[m
Author: Tanner Barlow <tanner.barlow12@gmail.com>
Date:   Mon Apr 15 14:57:12 2019 -0700

    Rename tag function in editor page

[33mcommit 996a555333e28a002a2e1e165c6823b1f6a3fab7[m
Author: Tanner Barlow <tanner.barlow12@gmail.com>
Date:   Mon Apr 15 13:58:37 2019 -0700

    Delete tag working

[33mcommit 8439574dc52a7e7167bd1d934a1a276a68aed2ae[m
Author: Tanner Barlow <tanner.barlow12@gmail.com>
Date:   Mon Apr 15 13:41:11 2019 -0700

    Saving assets in async foreach loop

[33mcommit 4193bc0e6aef6e1d7aca73053804cd04bdb6ea02[m
Author: Tanner Barlow <tanner.barlow12@gmail.com>
Date:   Mon Apr 15 12:50:13 2019 -0700

    Register mixins and run async loop

[33mcommit f394ea3d10397382c82e03b83288622e968d02eb[m
Author: Tanner Barlow <tanner.barlow12@gmail.com>
Date:   Mon Apr 15 12:43:49 2019 -0700

    Editor Page and canvas upates

[33mcommit 4f325dfe4b1a434727a32e77857b10d43f541d7a[m
Author: Tanner Barlow <tanner.barlow12@gmail.com>
Date:   Mon Apr 15 10:28:22 2019 -0700

    Split out project functions and asset functions into respective services

[33mcommit 2ef4e1387f63366c4002111b670143240bf80617[m
Author: Tanner Barlow <tanner.barlow12@gmail.com>
Date:   Mon Apr 15 09:06:03 2019 -0700

    Added confirm and strings for tag and rename operations

[33mcommit 1001528a168fa877be289dd66e3b2cb9808d5744[m
Author: Tanner Barlow <tanner.barlow12@gmail.com>
Date:   Mon Apr 15 08:31:18 2019 -0700

    Added tests for project service

[33mcommit 6974aef9d1526750e1729e824ba4d1e124ae565f[m
Author: Tanner Barlow <tanner.barlow12@gmail.com>
Date:   Mon Apr 15 08:05:00 2019 -0700

    Project service functions

[33mcommit 37234ec2e914be5e613784d7ea3fd37afdf218c0[m
Author: Tanner Barlow <tanner.barlow12@gmail.com>
Date:   Thu Apr 18 13:18:25 2019 -0700

    refactor: Remove editor footer

[33mcommit d6a059447d4583281ad1d0520534fb61e07a5be5[m
Author: Wallace Breza <wallace@breza.me>
Date:   Thu Apr 18 11:41:00 2019 -0700

    Fix: Enables selection of azure region for custom vision export (#765)
    
    Adds ability to select azure region where your custom vision service is hosted.
    Filters domain list by project type
    
    Resolves #759, #770

[33mcommit c10c971caf35fd65689c9b236f2e2664afd27f3e[m
Author: Wallace Breza <wallace@breza.me>
Date:   Wed Apr 17 16:43:31 2019 -0700

    feat: CNTK Export Provider (#771)
    
    Adds CNTK export provider into v2
    
    Resolves #754

[33mcommit 0fe63863b1e25a0db0b58ff1924af61af112d48d[m
Author: Wallace Breza <wallace@breza.me>
Date:   Wed Apr 17 16:27:43 2019 -0700

    feat: Save partial project progress during project creation (#769)
    
    This adds functionality to persist partial project information when creating a new project. Right now when creating a new connection inline within the create project flow and returning to the create project screen your partial project information is lost. Partial form progress is now saved into local storage and bound when returning to the form.
    
    Resolves #758

[33mcommit 39521f2b6133ac7aab40d82638d2d4ff76c65e98[m
Author: Jacopo Mangiavacchi <jmangia@me.com>
Date:   Mon Apr 15 15:03:03 2019 -0700

    Fix ymax and rename Tensorflow nama everywhere (#763)
    
    fix issue #760 [AB#18223]

[33mcommit 73995230ca9d0bf6b14f9c09979755286d3db565[m[33m ([m[1;33mtag: v2.0.0[m[33m)[m
Author: P.J. Little <peter.jacob.little@gmail.com>
Date:   Fri Apr 12 17:33:15 2019 -0700

    fix: windows bash build (#751)

[33mcommit b8f28ffe3cd5e5a71d3e657a77f76541c440183e[m
Author: My <mydiemho@users.noreply.github.com>
Date:   Fri Apr 12 17:19:26 2019 -0700

    ci: update artifact build trigger on tag

[33mcommit fd54a158349d9b5794f7a9eebb6698f6cc2087db[m
Author: P.J. Little <peter.jacob.little@gmail.com>
Date:   Fri Apr 12 16:53:02 2019 -0700

    ci: update package version and changelog for v2.0.0 release (#749)

[33mcommit 2139112fc0464a3a77376366fe1ae3a14ecba553[m
Author: P.J. Little <peter.jacob.little@gmail.com>
Date:   Fri Apr 12 16:12:25 2019 -0700

    doc: update v1/master reference (#748)
    
    Update release script to reference master, instead of v2.

[33mcommit 4f1574b8d65c8ede35c15f8f6393f745f8b09a74[m
Author: My <mydiemho@users.noreply.github.com>
Date:   Fri Apr 12 15:54:42 2019 -0700

    ci: update pipeline for v2 flipover to master (#747)
    
    * update release template
    * remove loc badge since it's misleading counting all the css files

[33mcommit 7bd9a382c2197c53df5b632830b5c05e78ec46dc[m
Author: Elizabeth Halper <elhalper@microsoft.com>
Date:   Fri Apr 12 22:42:11 2019 +0200

    feat: add ability to import v1 video project (#726)
    
    Adds ability to import V1 video projects

[33mcommit 3e465380549bb50f469df4c7f78afb16c0b5b2ae[m
Author: Tanner Barlow <tanner.barlow12@gmail.com>
Date:   Fri Apr 12 13:37:42 2019 -0700

    fix: Move findDOMNode outside of render method (#745)
    
    Resolves [AB#18160]

[33mcommit 33e0f7f22e896287206d53cd6e652b67366483a7[m
Author: My <mydiemho@users.noreply.github.com>
Date:   Fri Apr 12 12:23:25 2019 -0700

    doc: updating readme (#733)
    
    * update Readme.md and Contributing.md
    * remove markdown-toc
    * new screenshots ( jpg )
    * add mouse and keyboard shortcuts from vott-ct
    
    #AB17930

[33mcommit b89d7ebb974f967f43488485d67b3b8b766e031e[m
Author: Wallace Breza <wallace@breza.me>
Date:   Thu Apr 11 14:58:29 2019 -0700

    fix: Adjusts z-index video player overlays (#740)
    
    A regression was introduced that caused the video timeline overlay to override the z-index of the player bar causing the player controls to not work as expected. This resolves the issue by adjusting the z-index of both the player container as well as the disabled overlay for when controls are disabled.
    
    Resolved AB#18202

[33mcommit 7b3d1967f98c4d9abbde8025dc77ba62c8193636[m
Author: Wallace Breza <wallace@breza.me>
Date:   Thu Apr 11 14:26:54 2019 -0700

    fix: Updated keyboard manager to support meta (aka cmd) key (#743)
    
    Resolves an issue where normal Cmd+ keyboard shortcuts that typically work on Mac OSX don't work in VoTT. The fix treats Ctrl or Cmd to be equivalent and also checks the value of the "meta" key within keyboard events.
    
    Resolves AB#18159

[33mcommit ef9279aafaa0f1614e238c5cb240189d39c1cacf[m
Author: P.J. Little <peter.jacob.little@gmail.com>
Date:   Thu Apr 11 13:27:40 2019 -0700

    fix: don't allow invalid path characters in project name (#741)
    
    Regex now prevents invalid path characters (<>"/\|?*) in project
    names, since it is used in file system operations. Using reserved
    characters for Windows, as it is a superset of OSX/Linux.
    
    AB#18204

[33mcommit 276c1b89e92068d7860aa3bbbea16364f5f57e39[m
Author: Phil <PIC123@users.noreply.github.com>
Date:   Thu Apr 11 13:19:29 2019 -0700

    fix: switch asset count to include video frames (#717)
    
    Switches project metrics to track video frames as assets when calculating total assets

[33mcommit 14e0cf6a8f45d65b35f16ebb0645cfe2780d957b[m
Author: Wallace Breza <wallace@breza.me>
Date:   Wed Apr 10 16:07:26 2019 -0700

    feat: Enforce asset tagging before switching assets (#730)
    
    Enforces that there are no untagged regions within an asset before navigating away from the current loaded asset. Displays an alert warning when user attempt to navigate.

[33mcommit 3e11e1c7d9a1d74685e9ec77820689b06694e752[m
Author: Wallace Breza <wallace@breza.me>
Date:   Wed Apr 10 14:38:53 2019 -0700

    feat: Auto-size video/image assets and position canvas (#734)
    
    Normalizes the display of both image and video assets in VoTT. <video> tags by default display with object-fit: contain which forces the video to always render in its correct aspect ratio. The browser will automatically add horizontal / vertical bars as necessary based on fluid layouts. This updates images to also use this same technique to preserve aspect ratio.
    
    The side effect however is having to manually calculate the actual asset content from within the HTML elements by detecting aspect ratio and computing correct offsets.

[33mcommit 120732992027ff2a13d15cc350d6a3f964532eee[m
Author: P.J. Little <peter.jacob.little@gmail.com>
Date:   Tue Apr 9 16:56:58 2019 -0700

    fix: CORS warning message for Bing Image Search (#732)
    
    Error message displays when adding a Bing Image Search asset provider
    type. This is only applicable for the Browser target.
    
    AB#17153

[33mcommit d81d4754b889ce6135148256e7cd831115e4ea27[m
Author: Wallace Breza <wallace@breza.me>
Date:   Mon Apr 8 14:14:06 2019 -0700

    feat: Adds option to specify if images are included with JSON export (#728)
    
    Adds option that allows the user to specify whether or not binary images assets will be generated as part of the JSON export provider
    
    Resolves AB#18068

[33mcommit 3622f70e8618bd458713ae74de5d6fc3f6cfc8db[m
Author: Wallace Breza <wallace@breza.me>
Date:   Mon Apr 8 10:02:39 2019 -0700

    fix: Simplifies asset load flow (#727)
    
    Simplifies asset loading flow across images and video assets to be more deterministic and testable

[33mcommit e6c3f91123dfbcecab04f3a8dca8bb29e025989c[m
Author: Wallace Breza <wallace@breza.me>
Date:   Wed Apr 3 14:59:31 2019 -0700

    fix: Render Enhancments (#719)
    
    Resolves several fit and finish issues
    
    Adds missing localization mesages
    Re-floats tag panel to the far right vs inside the body (see screenshot)
    Add css breakpoints to hide titlebar menu on small screen
    Adds css to provider better UX on small screen
    Adds checkbox widget to Azure blob storage
    Resolves AB#18091

[33mcommit 1c5a15fa240641bf0b240fe2eeddbe4856947e59[m
Author: Wallace Breza <wallace@breza.me>
Date:   Tue Apr 2 08:31:32 2019 -0700

    feat: Add toast messages when entities are created / deleted (#714)
    
    Re-adds toast messages during connection create/delete as well as homepage recent project delete.

[33mcommit 743d0ca30af2ad975d1cf4f2a3ba1db10a56cccf[m
Author: Tanner Barlow <tanner.barlow12@gmail.com>
Date:   Tue Apr 2 01:08:25 2019 -0700

    feat: New Tag Input Component (#710)
    
    Resolves [AB#17094]

[33mcommit a5ee17a7c783c7a792c85d0a5e8c05040e189a74[m
Author: Phil <PIC123@users.noreply.github.com>
Date:   Mon Apr 1 14:11:34 2019 -0700

    feat: Add more export options to pascal voc exporter (#705)
    
    Adds options to specify test/train split, export regions with no assigned tags.
    Resolves regressions for exporting image sets and duplicate tags
    
    Resolves AB#16708,16532
    Resolves issues #692 #685

[33mcommit ab3ce6f10832fe67db17a846ec022c5fa41fd16b[m
Author: P.J. Little <peter.jacob.little@gmail.com>
Date:   Mon Apr 1 20:03:13 2019 +0200

    feat: exclude desktop functionality from browser target (#713)
    
    Remove electron functionality from browser builds. Some updates to
    CI scripts, based on things found in the last release.

[33mcommit 74f5237993516c7c7a7aa3510e8c0454e96d77af[m
Author: My <mydiemho@users.noreply.github.com>
Date:   Thu Mar 28 19:33:35 2019 -0700

    feature: tracking app metrics for web olny (#712)
    
    * feature: tracking app metrics for web only
    
    1. tracking app version with every metric
    1. tracking router/page changes
    1. tracking exception
        * include error type and message
        * uncaught exception are handled automatically by AppInsights
        * caught exception are handle manually
    1. tracking redux actions
        * only tracking action type

[33mcommit d151292328aca326ae432e0599d1ed5224d44bdd[m
Author: Phil <PIC123@users.noreply.github.com>
Date:   Wed Mar 27 18:20:05 2019 -0700

    fix: Catch error while tfrecord image not loaded (#701)
    
    Fixes bug where tfrecords show error loading image
    
    Resolves AB#17680

[33mcommit 3b609e0af9e0443167d6b388765a091a7b54f1b0[m
Author: My <mydiemho@users.noreply.github.com>
Date:   Wed Mar 27 15:41:16 2019 -0700

    ci: clean up deprecated pipelines (#708)
    
    and add "web deploy" release template for record keeping (since release
    does not currently support creation from yaml)

[33mcommit fddf7c3c1a0c145a9937f8c11646d93880ecfc77[m
Author: Wallace Breza <wallace@breza.me>
Date:   Wed Mar 27 14:40:22 2019 -0700

    feat: Update asset status to use badges & resize sidebar (#709)
    
    Updates the green/yellow shading on assets to use badges to display on top of asset. Also adds resizing to sidebar to allow the user to select the size of the asset sidebar which is persisted into appSettings.

[33mcommit 139f291fb2baa3b8941b297c2d059975f601e2fc[m
Author: My <mydiemho@users.noreply.github.com>
Date:   Tue Mar 26 13:23:52 2019 -0700

    ci: refactor plato report pipeline (#707)
    
    1. replace `az storage` command with `az copy` task for uploading
    1. templatize pipeline

[33mcommit b58bc5c1a6f65bd38591a6678b65d6aed437704e[m
Author: My <mydiemho@users.noreply.github.com>
Date:   Fri Mar 22 17:58:38 2019 -0400

    ci: refactor web deploy pipeline (#702)
    
    * move deploy functionality to release
    * replace az storage command with az copy ADO task

[33mcommit b0cd0405727245fdc2fbd2f785f8028091ad8721[m
Author: Tanner Barlow <tanner.barlow12@gmail.com>
Date:   Fri Mar 22 10:00:45 2019 -0700

    feat: Help menu displaying keyboard shortcuts (#689)
    
    Help menu that shows icon and keyboard shortcuts for registered actions. Refactored keyboard management to only allow one handler per key event/key combo
    
    [AB#17122]

[33mcommit dd3ae85096243cc7420619268ddeea9bf6c0a72b[m
Author: Elizabeth Halper <elhalper@microsoft.com>
Date:   Fri Mar 22 08:36:23 2019 -0700

    fix: replace default react favicon with tags icon  (#699)
    
    fix: replace default react favicon with tags icon  (#699)
    
    Get rid of React/Electron's default icons and replace them with the tags icon used throughout the app.
    
    AB#16537

[33mcommit d3ac9ab75ff9a497fecbd7de51c3a116865de53c[m
Author: Luisa de Miranda <lemiranda@gmail.com>
Date:   Thu Mar 21 16:14:29 2019 -0700

    WIP: resizes thumbnails and sidebar (#691)
    
    * resizes sidebar and thumbnails to match designer's sketch
    
    * fixes spacing error on text

[33mcommit 2f9cc86ddbe684ddc52db025e9594775f333f1b6[m
Author: My <mydiemho@users.noreply.github.com>
Date:   Thu Mar 21 13:06:57 2019 -0700

    ci: update pipelines to work for all branches with prefix dev (#700)
    
    * update pipelines to trigger for all PR targeting prefix dev
    
    * update web deploy to trigger for dev*

[33mcommit e85539417d60f818e1f3e8305c6526c818c882a3[m[33m ([m[1;33mtag: v2.0.0-preview.3[m[33m)[m
Author: My <mydiemho@users.noreply.github.com>
Date:   Wed Mar 20 17:05:42 2019 -0700

    ci: only create artifact for release on tag with pattern v2* (#698)

[33mcommit 16e2b66e6e78856a568123c065fbd691ba83c527[m
Author: Phil <PIC123@users.noreply.github.com>
Date:   Wed Mar 20 16:25:18 2019 -0700

    ci: update package version and changelog for 2.0.0-preview.3 release (#697)
    
    * ci: update package version and changelog for 2.0.0-preview.3 release
    
    * Update package-lock

[33mcommit 3e7da5dc3d555c5efe5fa4082e90204e6361b534[m
Merge: ce663a7 88e603d
Author: Phil <PIC123@users.noreply.github.com>
Date:   Wed Mar 20 15:34:16 2019 -0700

    Merge pull request #696 from Microsoft/dev-fix
    
    release: merge all prs since preview 2

[33mcommit 88e603d0e70a01f004eb3f9d9fa7aaf75be6114d[m
Author: Tanner Barlow <tanner.barlow12@gmail.com>
Date:   Wed Mar 20 14:54:43 2019 -0700

    ci: Clean up sonar cloud issues

[33mcommit 7523d80acc44707f59cbca6fbebc685194de30d0[m
Author: Tanner Barlow <tanner.barlow12@gmail.com>
Date:   Wed Mar 20 09:33:14 2019 -0700

    Remove height from root style (#694)

[33mcommit 45553cdef5b33f973fe5265311260a46b4caa655[m
Author: Tanner Barlow <tanner.barlow12@gmail.com>
Date:   Tue Mar 19 15:13:56 2019 -0700

    fix: Don't call tag click with invalid hot key (#690)
    
    Fixes [AB#17639] where hot key of non-existent tag is pressed throws an error

[33mcommit cd01a4ac1d0524b57b8ccf769c7d984470f557b2[m
Author: My <mydiemho@users.noreply.github.com>
Date:   Tue Mar 19 13:05:38 2019 -0700

    refactor: remove redux-invariant & redux-logging from production (#680)
    
    * these middlewares are intend to be use only during development.
    * also move a few packages from devDependencies to dependencies

[33mcommit c06405ce08e350d06d6f6e5ab2896b3514f00c64[m
Author: Wallace Breza <wallace@breza.me>
Date:   Mon Mar 18 09:43:40 2019 -0700

    fix: Cleans up some of the flexbox styling overflow content heights (#683)
    
    Resolves some overflow flexbox issues where the flexbox heights are not extending to the height of the scrolling app-content container.
    
    Resolves AB#16458

[33mcommit dd813c82c5c156e46fea51947e74c0dba2f1f249[m
Author: Tanner Barlow <tanner.barlow12@gmail.com>
Date:   Mon Mar 18 07:25:10 2019 -0700

    Blurring tag input on click and change (#679)

[33mcommit 3fb48c18c3da89539af594aa7c0b06f48caf9896[m
Author: My <mydiemho@users.noreply.github.com>
Date:   Wed Mar 13 14:17:08 2019 -0700

    fix: metrics page throw error if project has no tags (#681)
    
    create empty tags array on project creation if no tags created,
    right now it's null
    
    AB#17588

[33mcommit 8fd25a66e65f9fd59e06ec3e776f45e45ae3b125[m
Author: Wallace Breza <wallace@breza.me>
Date:   Wed Mar 13 10:30:06 2019 -0700

    feat: Updated UX of project metrics to include charts (#678)
    
    Fix includes adding react-vis to display charts for assets & tags metrics.

[33mcommit f3d154027cafb9e0c4d47e53378d8b796f44c8e5[m
Author: Jacopo Mangiavacchi <jmangia@me.com>
Date:   Wed Mar 13 08:55:58 2019 -0700

    fix: open file containing special characters in the name [AB#17533] (#671)
    
    - fix: open file containing special characters in the name
    
    Fix [AB#17533]

[33mcommit b9422cf8d4110448177f32cf61b2ced941e2eb13[m
Author: Wallace Breza <wallace@breza.me>
Date:   Tue Mar 12 18:07:33 2019 -0700

    fix: Re-apply tags in editor when project tags are updated (#673)
    
    Resolves issue where if tag color is modified while in the editor page, the color changes are not applied till you reload or navigate away from the current asset
    
    Resolves AB#17264

[33mcommit 484cd4a568c17f68a1da2e1e199ff03d96e39086[m
Author: Elizabeth Halper <elhalper@microsoft.com>
Date:   Tue Mar 12 16:26:47 2019 -0700

    fix: remove profile settings and active learning (#677)
    
    fix: remove profile settings and active learning (#677)
    
    Remove all unimplemented icons from view. This fix keeps any functionality required to add these features in the future.
    
    AB#17273

[33mcommit aed96561c68dbd285ed31c863fa8744635e267fa[m
Author: Elizabeth Halper <elhalper@microsoft.com>
Date:   Tue Mar 12 16:19:46 2019 -0700

    fix: misspelling in applicationActions.ts [AB#17157]
    
    fix: misspelling in applicationActions.ts [AB#17157]
    
    fix misspelling in applicationActions.ts from "dipatch" to "dispatch"
    
    AB#17157

[33mcommit 85a21815b6da512d9fa945eadc8a6c9dc2f45359[m
Author: My <mydiemho@users.noreply.github.com>
Date:   Tue Mar 12 13:25:38 2019 -0700

    fix: display spinner icon on metrics panel when loading (#669)
    
    * fix: display spinner icon on metrics panel when loading
    
    AB#17500
    
    * address pr comments
    
    * fix test

[33mcommit 445be755fcb97b573388cda5c5cc04a9f049e0ca[m
Author: My <mydiemho@users.noreply.github.com>
Date:   Tue Mar 12 11:26:08 2019 -0700

    fix: standardize default export option to "visited" (#667)
    
    * fix: standardize default export option to "visited"
    
    AB#17532

[33mcommit bfac88c1f6d55e6ff5cb0314526205cb5be12b9f[m
Author: Phil <PIC123@users.noreply.github.com>
Date:   Tue Mar 12 10:32:13 2019 -0700

    fix: Display asset load error when an asset fails to load (#654)
    
    Fixes bug where app would throw errors when assets would not load and did not fail gracefully. Now asset preview in sidebar and canvas area is replaced with an appropriate error message if the asset cannot load.

[33mcommit b1db551618416c37a482d6391bff5da0ddce0256[m
Author: Jacopo Mangiavacchi <jmangia@me.com>
Date:   Tue Mar 12 10:25:36 2019 -0700

    Fix saving asset metadata for all valid asset type (#668)
    
    fix: save asset metadata for all valid asset type [AB#17538]

[33mcommit c7537f033e7aadec218102699ac382a535095391[m
Author: My <mydiemho@users.noreply.github.com>
Date:   Tue Mar 12 09:21:56 2019 -0700

    ci: disable web vott deploy for PR (#670)
    
    only deploy on merge to dev and v2
    
    AB#17541

[33mcommit 57a5633e1964665447aee59737e2180d5ead120a[m
Author: Phil <PIC123@users.noreply.github.com>
Date:   Tue Mar 12 09:08:42 2019 -0700

    feat: Enable copy rectangle functionality in editor (#651)
    
    This adds the copy rectangle functionality of canvas tools to the VOTT editor. When a region is selected on the canvas, the user can select the copyRect button to switch modes and create regions, using the shape of the previously selected region as a template.
    
    Resolves [AB#17074]

[33mcommit 1480f3710c2b2ff6bc0d113d73a8aa3d86a3a80e[m
Author: Wallace Breza <wallace@breza.me>
Date:   Mon Mar 11 12:51:27 2019 -0700

    ci: Merge v2 into dev (#666)
    
    Merge change log and version bump into dev

[33mcommit 207b0c8706c75d4ba5e5f59dd9ccddbc26b353da[m
Author: Wallace Breza <wallace@breza.me>
Date:   Mon Mar 11 11:39:56 2019 -0700

    feat: Added Custom TitleBar & Status Bar (#664)
    
    Introduced custom electron frame, titlebar and status bar to enhance overall look and feel of application.

[33mcommit ce663a7fb22b22ff44f6b7b1c1b4e9f5d1fd266d[m[33m ([m[1;33mtag: v2.0.0-preview.2[m[33m)[m
Author: P.J. Little <peter.jacob.little@gmail.com>
Date:   Fri Mar 8 17:44:34 2019 -0800

    Release v2.0.0 preview.2 (#662)
    
    release: VoTT v2.0.0-preview.2
    
    Updated version and changelog.

[33mcommit e935c1c4c3cc78488faab22e17905edcebe09507[m
Author: P.J. Little <peter.jacob.little@gmail.com>
Date:   Fri Mar 8 16:56:23 2019 -0800

    Bug/17537/fix title (#660)
    
    * fix: removing version from the title bar
    
    Remove version from the title. Amazingly, webpack + environment variables is hard, cross platform.
    Reverting for now.
    
    AB#17537

[33mcommit 97ab5a19676d368eb867fcf4b074c2b7cd1fb21c[m
Author: Tanner Barlow <tanner.barlow12@gmail.com>
Date:   Fri Mar 8 14:08:09 2019 -0800

    Ignore error from react drag n drop (#648)

[33mcommit 1e935070584e23d087fbbc641374fcfa5cd6ed60[m
Author: P.J. Little <peter.jacob.little@gmail.com>
Date:   Fri Mar 8 13:54:00 2019 -0800

    ci: Azure DevOps pipeline definitions for VoTT Web CD (#658)
    
    Yaml files to deploy VoTT to Azure when PRs are merged into
    `dev` and `v2` branches.
    
    AB#17489

[33mcommit 80ccb03cc985c969b13ef3da5d13ee9a82404151[m
Author: P.J. Little <peter.jacob.little@gmail.com>
Date:   Fri Mar 8 13:48:28 2019 -0800

    ci: script to deploy VoTT to Azure (#656)
    
    Script to push VoTT single page app to Azure as a static Web site.
    Display version/commit SHA in multiple places to be able to easily
    determine version.
    
    AB#17484

[33mcommit b852f1876ea839fa8a7eca14c5a1707e1b4f26fe[m
Author: Wallace Breza <wallace@breza.me>
Date:   Fri Mar 8 15:30:39 2019 -0600

    fix: Resolves issue exporting all assets (#649)
    
    Resolves issue where exporting all assets doesn't include non-visited assets. Non-visited assets are no longer part of the project file and requires merging in assets from the source connection.
    
    Resolves AB#17365

[33mcommit b6bbde44b1f92f9d9161f962638af9bcf39cf354[m
Author: Elizabeth Halper <elhalper@microsoft.com>
Date:   Fri Mar 8 12:21:59 2019 -0800

    fix: save tagged video frames as "jpg" files (#641)
    
    * added jpg file extension
    
    * fix lint errors
    
    * Tests for extension replacement
    
    * fix: Updated asset name to fix all export providers
    
    * doc: Updated HtmlFileReader comments
    
    * test: Verify file extension is not duplicated
    
    * fix: Resolved minor tsc compile warnings

[33mcommit 9fbd32a2a25562f7607091cd8621f46a557a8f0f[m
Author: Elizabeth Halper <elhalper@microsoft.com>
Date:   Thu Mar 7 11:16:14 2019 -0800

    fix: remove grey and white from tagColors (#645)
    
    Removed grayscale colors from tagColors for CanvasTools compatibility
    
    [AB#17175]

[33mcommit 3ff426275f51473ffa04fd6f67d8e6c1f40d84c9[m
Author: Tanner Barlow <tanner.barlow12@gmail.com>
Date:   Wed Mar 6 15:36:19 2019 -0800

    Handle project with no tags while loading regions (#644)
    
    This handles an error where we set a guard to prevent non-null tags when getting the TagsDescriptor. CanvasTools expects a `null` when creating a region with no tags, so it's fine to just return null if there are no tags rather than raising an exception.
    
    Resolves [AB#17357]

[33mcommit 94282ea372c8044939dce31e7b4795fdce29a954[m
Author: My <mydiemho@users.noreply.github.com>
Date:   Wed Mar 6 14:41:49 2019 -0800

    fix: remove "All assets" from export options dropdown (#646)
    
    "all assets" doesn't currently export all assets,
    removing it so it doesn't cause confusion.
    
    We will add back this support once we have a working fix.
    
    AB#17461

[33mcommit 5f500177577eabfc88908b3fba2667780ec8b73e[m
Author: Tanner Barlow <tanner.barlow12@gmail.com>
Date:   Wed Mar 6 14:09:09 2019 -0800

    feat: Clear Regions updates [AB#17269] (#647)
    
    Clears regions with ctrl+delete, Add tests for clear confirmation, Fix CanvasHelpers test to avoid random fails, Replace clear with remove all
    
    Resolves

[33mcommit 33faa6071d734b1451316468f7ca1b16e19b7aa9[m
Author: Tanner Barlow <tanner.barlow12@gmail.com>
Date:   Wed Mar 6 09:15:23 2019 -0800

    fix: Don't allow invalid pasting (#640)
    
    Any regions pasted outside the dimensions of the asset will be pasted in the top-left of the asset. Regions too big for the asset cause an error to be thrown.
    
    Resolves [AB#17353]

[33mcommit bd73bf0ea82520265afce411f475f1852b35836f[m
Author: My <mydiemho@users.noreply.github.com>
Date:   Tue Mar 5 21:15:12 2019 -0800

    fix: set default export format in project (#642)
    
    export wasn't doing anything because there wasn't a default format.
    
    AB#17437

[33mcommit 85f7c518eacc6323f9e92ff398e725a723043c53[m
Author: Tanner Barlow <tanner.barlow12@gmail.com>
Date:   Tue Mar 5 17:34:33 2019 -0800

    fix: Tagging new region only applies to one region (#635)
    
    Originally meant to fix a bug for hot keys applying the wrong tag to a region, but then discovered that the root cause was that each tag was being toggled on every region. If multiple tags were applied to multiple regions, it appeared that the wrong tag was being applied.
    
    Resolves [AB#17176]

[33mcommit 18f6dbb7c436305cee90ba45852697662cdfb5b5[m
Author: Tanner Barlow <tanner.barlow12@gmail.com>
Date:   Tue Mar 5 17:23:26 2019 -0800

    feature: Enhanced error message for unknown errors (not in prod mode) (#639)
    
    Error message displayed with prettified JSON while not in production mode (to avoid potential leaking of sensitive info)

[33mcommit 48671cbe485dc643c44d23807a2ddb25c3c8c084[m
Author: My <mydiemho@users.noreply.github.com>
Date:   Tue Mar 5 13:59:43 2019 -0800

    feature: display project metrics (#638)
    
    add a panel inside `Project Settings` page to display relevant
    project metrics:
    1.  number of source assets
    1.  number of tagged assets
    1.  number of visited assets
    1.  number of regions drawn
    1. avg tags per asset
    1. number of tags categories in project
    1. number of tags in each category
    
    AB#16587

[33mcommit 149ba4749c467e5626ffcb22a2bd919600c5637e[m
Author: Elizabeth Halper <elhalper@microsoft.com>
Date:   Tue Mar 5 12:13:45 2019 -0800

    fix: re-add exportProject to registerToolbar (#634)
    
    fix: re-add exportProject to registerToolbar
    
    ExportProject interface had been removed from the registerToolbar file, causing no action when the "export project" button was clicked. Adding this interface to the file will allow for projects to be exported.
    
    Helps support multiple bug fixes

[33mcommit 9daacad1f8c77abec6599ba1c4e91e4a4717d63b[m
Author: Tanner Barlow <tanner.barlow12@gmail.com>
Date:   Tue Mar 5 09:53:36 2019 -0800

    fix: Upgrade vott-react and add test cases for adding new tags (#637)
    
    Upgrades vott-react to handle error when creating new tags
    
    [AB#17421]

[33mcommit 4a92ea817ee249dd0e1c4b130033955c8c00c2a8[m
Author: My <mydiemho@users.noreply.github.com>
Date:   Mon Mar 4 14:48:11 2019 -0800

    ci: modify pipeline to also run off dev branch (#633)
    
    in preparation for working off of "dev" branch

[33mcommit 4aaf0f129df68b594317f712ece222233970a314[m
Author: Tanner Barlow <tanner.barlow12@gmail.com>
Date:   Mon Mar 4 14:17:43 2019 -0800

    fix: Updated EditorTagsInput to work with vott-react (#630)
    
    Displays locked tags, uses `getTagSpan` to render each tag.
    
    Points to new version of vott-react, solving bugs:
    
    AB#17261, AB#17266.

[33mcommit 60cb1fb087745db74ef60b4a43c73dacd5015a67[m
Author: Wallace Breza <wallace@breza.me>
Date:   Mon Mar 4 09:47:42 2019 -0800

    fix: Wrap the delete call to protect against 404's (#632)

[33mcommit 58108bf0204e73b7020168044848671f208767ec[m
Author: Elizabeth Halper <elhalper@microsoft.com>
Date:   Sun Mar 3 13:06:20 2019 -0800

    feat: add ability to import v1 projects (#610)
    
    feat: add ability to import v1 projects
    
    Add feature that allows users to import projects from v1 format into the v2 application and edit them as a v2 project with all existing metadata. Persist project assets and project file just as a v2 project behaves.
    
    Resolves AB#16635

[33mcommit 3a4612eca38da8058860ddc06e473f393dd9c08f[m
Author: Luisa de Miranda <lemiranda@gmail.com>
Date:   Fri Mar 1 18:36:01 2019 -0800

    feat: add hotkeys for all editor toolbar items and simplify tag input hotkeys (remove ctrl+) (#617)
    
    * add hotkeys to toolbar and simplify hotkeys on tags
    * fix editor toolbar tests

[33mcommit 345dbbdb284969c415b1a21997869bdd9aa1de88[m
Author: Wallace Breza <wallace@breza.me>
Date:   Fri Mar 1 10:12:44 2019 -0800

    fix: Fixes issue where user is unable to navigate to new project screen (#629)
    
    Resolves the issue where user is unable to navigate to new project screen from the homepage. This also addresses other strange behavior related to routing in the app.
    
    -User being navigated to the homepage after creating a connection
    -Refresh application button not working
    
    Resolves AB#17258, 17263, 17058

[33mcommit 886d5e5f685abcce4fee15af699a7aed33e4d458[m
Author: Tanner Barlow <tanner.barlow12@gmail.com>
Date:   Fri Mar 1 09:45:12 2019 -0800

    feat: Copy, Cut, Paste and Clear (#624)
    
    Added generic Clipboard wrapper that calls clipboard async API
    Refactor toolbar registration to use generic ToolbarItem unless necessary (save and export still need it) and refactored tests to reflect changes. Added public copyRegions, cutRegions, pasteRegions and clearRegions definitions to Canvas. Added toolbar buttons to call regions management functions with associated hot keys.
    
    Ctrl+c = copy
    Ctrl+x = cut
    Ctrl+v = paste
    Ctrl+e = clear
    
    Resolves [AB#16720]

[33mcommit 7dacf6138e719bce21f9d829fe0b685413c3b6ea[m
Author: Luisa de Miranda <lemiranda@gmail.com>
Date:   Fri Mar 1 09:35:01 2019 -0800

    docs: adds list of shortcuts (hotkeys) to docs (#628)
    
    This PR adds a list to the user docs of all keyboard shortcuts currently implemented in the app.
    
    AB#17123

[33mcommit 693f6c13b30f1165487ade5ee16041c77e75cd04[m
Author: Luisa de Miranda <lemiranda@gmail.com>
Date:   Fri Mar 1 09:34:35 2019 -0800

    fix: replaces emtpy with empty throughout (#627)
    
    This PR fixes one oddly pervasive typo.
    
    AB#17326

[33mcommit 3783d7114b0d78335e16089b24dc2c1e6e48514e[m
Author: Wallace Breza <wallace@breza.me>
Date:   Fri Mar 1 09:34:09 2019 -0800

    fix: Resolves typescript tsc compile issues for v3.1.6 (#625)
    
    When running on typescript < 3.2.x there were several TS errors including:
    
    Warnings about --isolated modules due to import of package.json
    Warnings about Promise<{}> vs Promise<void>
    HtmlFileReader usage was inconsistent between use of ArrayBuffer vs UInt8Array

[33mcommit 8ad667d6741bf3b723ed3401890147cd81075a3d[m
Author: Jacopo Mangiavacchi <jmangia@me.com>
Date:   Fri Mar 1 09:14:03 2019 -0800

    fix: Move last visited tag settings to reducer to fix delete file assets bug [#AB17101] (#626)
    
    - Move last visited tag settings from editor Page to project Redux action
    - Removed non necessary filter on selecting asset files to delete
    
    Fix bug [#AB17101]

[33mcommit a0c4fb86dd292b1b28e586b2d02159dca0925fc9[m
Author: Phil <PIC123@users.noreply.github.com>
Date:   Wed Feb 27 14:17:55 2019 -0500

    feat: Export video frames AB#16583 (#585)
    
    Add ability to export video frames in current exporters, treating video frames as images, and verify with tests.
    
    AB#16583

[33mcommit 84a35e5c82512dbec6b70ad3f6757aec5dc081a6[m
Author: My <mydiemho@users.noreply.github.com>
Date:   Wed Feb 27 11:07:54 2019 -0800

    ci: make sure build fail if codecov token is missing (#621)
    
    also update README to point ADO badge to new CI pipeline
    
    have to create a new pipeline using the new YAML wizard
    so that GitHub Pipelines App is used instead of webhook.
    
    This fix the issue where re-running the ADO build from the
    `Check` tab in GitHub doesn't kick off actual build in ADO.

[33mcommit 1958c79b25e503e7a8436c36e892446ceb377508[m
Author: Wallace Breza <wallace@breza.me>
Date:   Wed Feb 27 10:26:42 2019 -0800

    fix: User can navigate between key frames using keyboard accelerators (#619)
    
    Resolves the issue where keyboard accelerators to navigate between key frames was throwing an error. Main issue was that multiple keyboard bindings were being registered for the hot keys causing weird behavior issues. Keyboard bindings are now only registered for the main video player control inside the canvas.
    
    Resolves AB#17130

[33mcommit 2f227b263d3e154e261e77375042dadefdcf2412[m
Author: Wallace Breza <wallace@breza.me>
Date:   Wed Feb 27 10:26:10 2019 -0800

    fix: Delete asset metadata files when project is deleted (#620)
    
    Resolves the issue where orphaned asset metadata files still exist on the target connection.
    
    Resolves AB#17101

[33mcommit d14522f257a56620f7af16735c1ac8cc3234a420[m
Author: Jacopo Mangiavacchi <jmangia@me.com>
Date:   Wed Feb 27 09:50:46 2019 -0800

    feat: Ability to retain the state of the last viewed asset on project open [#AB17139] (#615)
    
    * Save last visited asset id on project save
    * Scroll to last visited asset on opening project
    * Added unit test to check save and load of last visited asset info
    
    Implement [#AB17139]

[33mcommit 6a3e7c240d7e11ce50c9f96775bb288e2b83a386[m
Author: Tanner Barlow <tanner.barlow12@gmail.com>
Date:   Wed Feb 27 09:05:07 2019 -0800

    feat: Locked tags for tagging regions (#600)
    
    Tags can now be locked and applied to regions upon selection or creation.
    
    Resolves [AB#16986]

[33mcommit 6c5296b1b694c337b475ae4cfe072a3d22b2e88b[m
Author: P.J. Little <peter.jacob.little@gmail.com>
Date:   Tue Feb 26 17:59:20 2019 -0800

    ci: update release names and package details (#614)
    
    Update release package names to use a more standard convention
    that includes version. Add more details to package.json.
    
    AB#17236

[33mcommit e098ca82f2e880b11d81275c5d6595763782aa3d[m
Author: P.J. Little <peter.jacob.little@gmail.com>
Date:   Tue Feb 26 11:15:03 2019 -0800

    ci: add changelog and release scripts (#608)
    
    This adds scripts for generating changelogs and for staging VoTT release.
    It will update the version in package.json and generate the changelog,
    given previous/next release tags. .
    
    AB#17192

[33mcommit 3aa2289c884bc1cafa8502f6dd02b9a5d5d556ba[m
Author: Wallace Breza <wallace@breza.me>
Date:   Tue Feb 26 07:33:55 2019 -0800

    fix: Fixes issue where regions cannot be deleted (#612)
    
    Fixes the issue where the last region in an asset is unable to be deleted. When all the regions on an asset are deleted the asset transitions back into the "Visited" state. Therefore, when the asset metadata is saved is is not persisted back to the file system since it is no longer in the "Tagged" state. The fix is to instead of saving the asset metadata file it should be deleted from the storage provider since the asset metadata file doesn't not provide any additional metadata outside of region data.
    
    Resolves AB#17174

[33mcommit a55fb212983df935dea83aca47deb4e41f9d900e[m
Author: P.J. Little <peter.jacob.little@gmail.com>
Date:   Mon Feb 25 20:59:44 2019 -0800

    docs: update contribution guidelines for changelog (#606)
    
    Contribution guidelines now reflect new git commit message
    conventions, to support change log generation.
    
    AB#17149

[33mcommit a5424b9ef1263e6ff277218ad5e9f06e4f0830ef[m
Author: Jacopo Mangiavacchi <jmangia@me.com>
Date:   Mon Feb 25 12:18:06 2019 -0800

    feat: Add Project version info (#609)
    
    * Add version to project
    
    * Add version to Asset Metadata
    
    * Add version to app settings page
    
    * Add redux test
    
    Implement [#AB17100]

[33mcommit 8b57dedd7f4e976e2e9a5883872d889fc0fa4cef[m
Author: Wallace Breza <wallace@breza.me>
Date:   Mon Feb 25 11:47:03 2019 -0800

    fix: Correct bounding box values on region move (#604)
    
    Corrects an issue where bounding box position was not being updated correctly when a region was moved within the canvas editor. Also randomized region test data to ensure we are tests are more accurate
    
    Resolves AB#17173

[33mcommit 056d4059053cc8c47ca2e6dd71e9562edbc04c2a[m
Author: Wallace Breza <wallace@breza.me>
Date:   Mon Feb 25 11:30:25 2019 -0800

    fix:Add Connection button displays with correct style (#603)
    
    This fixes the issue where the "Add Connection" button currently displays with the incorrect styles making it appear that the button is disabled.
    
    Resolves AB#17158

[33mcommit c418f396c22b7100d3d3167a66928af23cf9df70[m
Author: My <mydiemho@users.noreply.github.com>
Date:   Mon Feb 25 10:01:06 2019 -0800

    ci: update sonarcloud to ignore test files (#602)
    
    1. we were getting code smell noise on test files

[33mcommit eb7d3a4861dbbc2d727b88b3f8eda93b587f531f[m
Author: Wallace Breza <wallace@breza.me>
Date:   Fri Feb 22 15:02:26 2019 -0800

    fix:Resolves issue where user is unable to create new project (#601)
    
    Fixes a bug where when attempting to create a new project after already have opened a project it does not close the existing project before navigating the user to the new project screen.
    
    Also resolves issue where security token picker component was not rendering in in project settings form.
    
    Resolves AB#17172, AB#17177, AB#17179, AB#17180

[33mcommit 6e767e7839a077564769995b3d1f525f83cfcb6f[m
Author: Wallace Breza <wallace@breza.me>
Date:   Thu Feb 21 14:44:35 2019 -0800

    fix: Navigating to homepage should't close any open project (#596)
    
    The homepage was incorrectly closing any open project. This fix removes the explicit `closeProject` action and allows the user to navigate to the homepage and back to an open project if desired.
    
    Resolves AB#17140

[33mcommit 837527925332cff0f785c70e891c7c7d1644127e[m
Author: Jacopo Mangiavacchi <jmangia@me.com>
Date:   Thu Feb 21 14:42:31 2019 -0800

    feat: Add tag to project while importing TFRecords [AB#17001] (#586)
    
    * Import tag metadata from TFRecords file and save asset metadata with region/tag info and tagged state
    * Add tags to Project while automatically import new tag information from the asset metadata
    * Refresh Tag component on the EditorToolbar with the new founded tags
    * Implement unit tests for testing tag detection, project update and tag component refresh
    
    Resolves AB#17001

[33mcommit 4a9fb61105fcdd5674f1162cef2caa6b35d9e628[m
Author: Wallace Breza <wallace@breza.me>
Date:   Thu Feb 21 14:06:09 2019 -0800

    fix: Disables KeyboardManager when focused on input elements (#595)
    
    Fixes an issue in the `KeyboardManager` component where a configured keyboard accelerator can override behavior when the user is entering data into a input/textarea element leading to a poor user experience. Disables `KeyboardManager` events from firing when the app detects the user is focus in an input element.
    
    Resolves AB#17120

[33mcommit debd1c1224ff272786bd22cf0dc0732496c58fc1[m
Author: Wallace Breza <wallace@breza.me>
Date:   Wed Feb 20 17:51:18 2019 -0800

    fix: Corrects canvas sizing and region sizes (#592)
    
    Corrects the issue where the assets viewed inside VoTT are not always displayed in the correct aspect ratio, regions are skewed and region scaling does not work 100%. Also corrects issue with resizing assets while resizing the main application window.
    
    Resolves AB#17073

[33mcommit 54d5ca7b121135b90fb3f602a72d5019db6b1cf5[m
Author: Tanner Barlow <tanner.barlow12@gmail.com>
Date:   Wed Feb 20 14:43:47 2019 -0800

    refactor:Refactor canvas component to utilize internal state (#594)
    
    Refactors the canvas component to utilize internal state as opposed to directly modifying the selected asset from the properties. Fixes some race conditions when making changes to assets and their regions.
    
    [AB#17114]

[33mcommit aea056ea267ebaadb20b089b4a7b15bc55b79d70[m
Author: Luisa de Miranda <lemiranda@gmail.com>
Date:   Wed Feb 20 07:27:50 2019 -0800

    rebasing and squashing wabrez/integrat-vott-react (#591)
    
    * rebasing and squashing wabrez/integrat-vott-react
    
    * updated canvas tools

[33mcommit 2e5acb6f929c8c96bd278927666ba751ddf84e12[m
Author: Tom Miller <tmiller@microsoft.com>
Date:   Mon Feb 18 20:02:14 2019 -0800

    Only hook video state change on non-preview assets AB#17076 (#575)
    
    * Only hook video state change on non-preview assets
    
    * Updating tests
    
    * Adding unit test

[33mcommit 43a7bec341a78fa8d72a9e4915a9b8661501c95e[m
Author: Wallace Breza <wallace@breza.me>
Date:   Fri Feb 15 16:58:19 2019 -0800

    Fixes previous/next buttons to navigate between assets (#576)
    
    * Updated editor page state to not include child assets
    
    * Added more unit tests to verify asset metadata saving
    
    * Reverted changes to sidebar
    
    * Renamed `isChildAssetType` to `isTaggableAssetType`
    
    * Renamed parentAsset to rootAsset to make this more clear
    
    * Address PR feedback

[33mcommit 1cff53dda6625c03859d989f4f26c34bc8c651ac[m
Author: My <mydiemho@users.noreply.github.com>
Date:   Fri Feb 15 16:54:58 2019 -0800

    add keyboard shorcut for navigating video frames (#588)
    
    1. q/e for navigating between tagged frames
    1. a/d & left/right-arrow for navigating between non-tagged frames

[33mcommit 5ebe0ae34198f13ec4d44b3ac8919c5a88050dd8[m
Author: Wallace Breza <wallace@breza.me>
Date:   Fri Feb 15 16:54:33 2019 -0800

    Removed toolbar items that are not implemented (#589)
    
    * Removed toolbar items that are not implemented
    
    * Removed commented out copyRect toolbar item
    
    * Removed unused reference to copy rectangle component

[33mcommit 9579d83c48a0d8c0cc83e4b0ba89c3bc998edab0[m
Author: My <mydiemho@users.noreply.github.com>
Date:   Fri Feb 15 10:21:02 2019 -0800

    fix sidebar so it's in sync with asset navigation (#584)

[33mcommit 1b249ebaffc957893bfb5041e9db0ebd985804d6[m
Author: P.J. Little <peter.jacob.little@gmail.com>
Date:   Fri Feb 15 10:10:17 2019 -0800

    Updating report CI scripts to be more robust. (#581)

[33mcommit db6d8a2385c2ce38f2cb98b71433f6ae124f0dbb[m
Author: Wallace Breza <wallace@breza.me>
Date:   Fri Feb 15 09:49:01 2019 -0800

    Refactor region tags to only be a string array (#587)
    
    * Refactor region tags to only be a string array
    
    * Removed unused variable

[33mcommit 5cd7e9128e68814a2221a66a69d7d4e6a0ca4044[m
Author: Jacopo Mangiavacchi <jmangia@me.com>
Date:   Thu Feb 14 22:54:25 2019 -0800

    Fix Asset detection from path (#578)
    
    * Fix Asset detection from path
    
    * do not override fileName
    
    * Generilize extension multi split detection

[33mcommit 6a84effee75dac58034474ffe9dd30fd4d7171a2[m
Author: Tom Miller <tmiller@microsoft.com>
Date:   Thu Feb 14 17:09:13 2019 -0800

    Inital user docs for video player AB#17082 (#580)
    
    * Inital doc for video player
    
    * Updating docs based on PR feedback
    
    * Updating based on PR feedback

[33mcommit dff6aaa2c5955d7694ec8a15fe2457915157e678[m
Author: Tom Miller <tmiller@microsoft.com>
Date:   Thu Feb 14 11:57:41 2019 -0800

    EditorPage does not have correct state when navigating directly via URL- AB#17079 (#577)
    
    * Updating EditorPage state when navigating directly to the page via URL once props have been received.
    
    * Adding test to verify bug fix

[33mcommit 44df6597b5ad2c4a23af1e465cdb27e567cf22ce[m
Author: P.J. Little <peter.jacob.little@gmail.com>
Date:   Wed Feb 13 22:04:32 2019 -0800

    Added CI script for updating complexity reports, pushing to blob (#574)

[33mcommit c715bc34d8dca0dbbc569ed230aa048498267cb4[m
Author: Jacopo Mangiavacchi <jmangia@me.com>
Date:   Wed Feb 13 17:17:20 2019 -0800

    Import region metadata from TFRecords (#566)
    
    * WIP: Started refactoring canvas based assets
    
    * Wired up editor page for basic experience
    
    * WIP: Updated canvas to support single child element
    
    * Making progress
    
    * Got per frame tagging to work
    
    * Load and set child assets
    
    * Updated to filter out child assets from displaying in side bar
    
    * Fixed issue with image regions now redrawing
    
    * Integrated next/previous tagged frame buttons
    
    * Wabrez/video test coverage (#549)
    
    * Added unit tests for custom video player button
    
    * Added unit tests for image asset component
    
    * Added unit tests for video asset component
    
    * Wired up editor page for basic experience
    
    * WIP: Updated canvas to support single child element
    
    * Making progress
    
    * Load and set child assets
    
    * Wabrez/video test coverage (#549)
    
    * Added unit tests for custom video player button
    
    * Added unit tests for image asset component
    
    * Added unit tests for video asset component
    
    * Canvas / Editor Page Test Coverage (#552)
    
    * Added unit tests for asset preview component
    
    * Moved components into correct location
    
    * Re-enabled canvas unit tests
    
    * Added more canvas unit tests
    
    * Refactored canvas and editor page tests
    
    * Fixed issue instantiating canvas tools editor
    
    * Update TFRecords functions
    
    * WIP: Adding TFRecord Asset Preview
    
    * Loading Image from TFRecord file
    
    * Adding State to TFRecord asset component
    
    * Fix async read tfrecords attributes
    
    * Removed image ref on TFRecord asset
    
    * Ripristinated image ref in tfrecord asset
    
    * Fix issues on render called before componentWillMount
    
    * Update state only if asset changes
    
    * Moved tfrecordAsset to new folder
    
    * WIP: Adding tfrecordAsset unit test
    
    * Updated tfrecordAsset to last refactor changes
    
    * Updated path
    
    * Refactored based on last changes and removed duplicates
    
    * added docs
    
    * init state with property and removed constructor
    
    * Fixed unit test
    
    * WIP: Started refactoring canvas based assets
    
    * Wired up editor page for basic experience
    
    * Wired up editor page for basic experience
    
    * WIP: Updated canvas to support single child element
    
    * WIP: Updated canvas to support single child element
    
    * WIP: Adding TFRecord Asset Preview
    
    * Making progress
    
    * Making progress
    
    * Got per frame tagging to work
    
    * Load and set child assets
    
    * Updated to filter out child assets from displaying in side bar
    
    * Fixed issue with image regions now redrawing
    
    * WIP: Reading Region metadata from TFRecord
    
    * Integrated next/previous tagged frame buttons
    
    * Added Features Array capability to TFRecords Reader
    
    * Wabrez/video test coverage (#549)
    
    * Added unit tests for custom video player button
    
    * Added unit tests for image asset component
    
    * Added unit tests for video asset component
    
    * Creating IRegion array
    
    * Adding Interface for TFRecord Object arrays
    
    * Canvas / Editor Page Test Coverage (#552)
    
    * Added unit tests for asset preview component
    
    * Moved components into correct location
    
    * Re-enabled canvas unit tests
    
    * Added more canvas unit tests
    
    * Refactored canvas and editor page tests
    
    * Fixed issue instantiating canvas tools editor
    
    * Fix TFRecord Object Array Interface
    
    * Separated function for converting Region from TFRecord
    
    * Replaced setTimeout() with setImmediate() in TFRecord asset test
    
    * Removed HEAD file created in rebase
    
    * Imported Tag name and color
    
    * Test import metadata from tfrecord file
    
    * Test region transformation
    
    * Added comments and localization
    
    * Fixed region bounding box calculus
    
    * Fixed TFRecords region width/height export
    
    * WIP: Started refactoring canvas based assets
    
    * WIP: Started refactoring canvas based assets
    
    * Wired up editor page for basic experience
    
    * Wired up editor page for basic experience
    
    * Wired up editor page for basic experience
    
    * WIP: Updated canvas to support single child element
    
    * WIP: Updated canvas to support single child element
    
    * WIP: Updated canvas to support single child element
    
    * Update TFRecords functions
    
    * Add TFRecord new asset type changes
    
    * WIP: Adding TFRecord Asset Preview
    
    * Loading Image from TFRecord file
    
    * Making progress
    
    * Making progress
    
    * Making progress
    
    * Adding State to TFRecord asset component
    
    * Got per frame tagging to work
    
    * Got per frame tagging to work
    
    * Fix async read tfrecords attributes
    
    * Removed image ref on TFRecord asset
    
    * Ripristinated image ref in tfrecord asset
    
    * Fix issues on render called before componentWillMount
    
    * Load and set child assets
    
    * Load and set child assets
    
    * Load and set child assets
    
    * Update state only if asset changes
    
    * Updated to filter out child assets from displaying in side bar
    
    * Updated to filter out child assets from displaying in side bar
    
    * Fixed issue with image regions now redrawing
    
    * Integrated next/previous tagged frame buttons
    
    * Wabrez/video test coverage (#549)
    
    * Added unit tests for custom video player button
    
    * Added unit tests for image asset component
    
    * Added unit tests for video asset component
    
    * Wabrez/video test coverage (#549)
    
    * Added unit tests for custom video player button
    
    * Added unit tests for image asset component
    
    * Added unit tests for video asset component
    
    * Moved tfrecordAsset to new folder
    
    * WIP: Adding tfrecordAsset unit test
    
    * Canvas / Editor Page Test Coverage (#552)
    
    * Added unit tests for asset preview component
    
    * Moved components into correct location
    
    * Re-enabled canvas unit tests
    
    * Added more canvas unit tests
    
    * Refactored canvas and editor page tests
    
    * Fixed issue instantiating canvas tools editor
    
    * Updated tfrecordAsset to last refactor changes
    
    * Updated path
    
    * Refactored based on last changes and removed duplicates
    
    * added docs
    
    * init state with property and removed constructor
    
    * Fixed unit test
    
    * Removed ~HEAD files created by rebase
    
    * Added comments and localization
    
    * Fixed code duplication in test
    
    * Removed duplicated mock
    
    * Fixed test error
    
    * Wired up editor page for basic experience
    
    * WIP: Updated canvas to support single child element
    
    * WIP: Adding TFRecord Asset Preview
    
    * Making progress
    
    * Fixed issue with image regions now redrawing
    
    * WIP: Reading Region metadata from TFRecord
    
    * Integrated next/previous tagged frame buttons
    
    * Wabrez/video test coverage (#549)
    
    * Added unit tests for custom video player button
    
    * Added unit tests for image asset component
    
    * Added unit tests for video asset component
    
    * Creating IRegion array
    
    * Canvas / Editor Page Test Coverage (#552)
    
    * Added unit tests for asset preview component
    
    * Moved components into correct location
    
    * Re-enabled canvas unit tests
    
    * Added more canvas unit tests
    
    * Refactored canvas and editor page tests
    
    * Fixed issue instantiating canvas tools editor
    
    * Fix TFRecord Object Array Interface
    
    * Replaced setTimeout() with setImmediate() in TFRecord asset test
    
    * Removed HEAD file created in rebase
    
    * Fixed code duplication in test
    
    * Resolved some PR feedback
    
    * Fixed import regions test
    
    * temporary comment some code
    
    * Removed comments from previous commit
    
    * Moved ITFRecordMetadata interface to applicationState
    
    * Fixed SonarCloud issue
    
    * Removed duplicated test
    
    * Removed empty prop interfaces
    
    * Addressed feedback from PR

[33mcommit faf11890c7211d90732e5d8ceeab3b61b290ee9f[m
Author: Wallace Breza <wallace@breza.me>
Date:   Wed Feb 13 14:06:28 2019 -0800

    Added context menu option in electron for all input fields AB#16922 (#570)
    
    * Added context menu option in electron for all input fields
    
    * Reverted single quote change on comments
    
    * Fixed typo

[33mcommit 99e5b2ae09eb7ffe4f328e42f7b0ad4a9319dc72[m
Author: Tom Miller <tmiller@microsoft.com>
Date:   Wed Feb 13 14:04:08 2019 -0800

    Adding visited/tagged marks on video timeline AB #16772 (#556)
    
    * Adding marks (yellow visited/green tagged) on video timeline
    * Adding tests
    * Cleaning up seeking of video to all go through same method, and adding new helpers
    * Next/Previous "frame"
    * Tests/strings
    * Lock video frames to project settings keyframe rate

[33mcommit 1d7e674faa38f5f8f7d44ebca22fa9a0dbe92673[m
Author: Wallace Breza <wallace@breza.me>
Date:   Wed Feb 13 12:43:51 2019 -0800

    Fixed issue where validation was not showing up for source/target connection in project settings (#571)

[33mcommit e2f1afef31509430033a7c8fda43d97aff52d9fe[m
Author: Jacopo Mangiavacchi <jmangia@me.com>
Date:   Wed Feb 13 10:20:58 2019 -0800

    TFRecords import refactoring (#553)
    
    * WIP: Started refactoring canvas based assets
    
    * Wired up editor page for basic experience
    
    * WIP: Updated canvas to support single child element
    
    * Making progress
    
    * Got per frame tagging to work
    
    * Load and set child assets
    
    * Updated to filter out child assets from displaying in side bar
    
    * Fixed issue with image regions now redrawing
    
    * Integrated next/previous tagged frame buttons
    
    * Wabrez/video test coverage (#549)
    
    * Added unit tests for custom video player button
    
    * Added unit tests for image asset component
    
    * Added unit tests for video asset component
    
    * Wired up editor page for basic experience
    
    * WIP: Updated canvas to support single child element
    
    * Update TFRecords functions
    
    * Add TFRecord new asset type changes
    
    * WIP: Adding TFRecord Asset Preview
    
    * Loading Image from TFRecord file
    
    * Making progress
    
    * Adding State to TFRecord asset component
    
    * Fix async read tfrecords attributes
    
    * Removed image ref on TFRecord asset
    
    * Ripristinated image ref in tfrecord asset
    
    * Fix issues on render called before componentWillMount
    
    * Load and set child assets
    
    * Update state only if asset changes
    
    * Wabrez/video test coverage (#549)
    
    * Added unit tests for custom video player button
    
    * Added unit tests for image asset component
    
    * Added unit tests for video asset component
    
    * Moved tfrecordAsset to new folder
    
    * WIP: Adding tfrecordAsset unit test
    
    * Canvas / Editor Page Test Coverage (#552)
    
    * Added unit tests for asset preview component
    
    * Moved components into correct location
    
    * Re-enabled canvas unit tests
    
    * Added more canvas unit tests
    
    * Refactored canvas and editor page tests
    
    * Fixed issue instantiating canvas tools editor
    
    * Updated tfrecordAsset to last refactor changes
    
    * Updated path
    
    * Refactored based on last changes and removed duplicates
    
    * added docs
    
    * init state with property and removed constructor
    
    * Fixed unit test
    
    * Removed ~HEAD files created by rebase
    
    * Added comments and localization
    
    * Update videoAsset comments
    
    * Fixes from PR feedback
    
    * Fixes from PR feedback
    
    * Fixes from PR feedback
    
    * Removed wrong rebased line in EditorPage

[33mcommit f51e996cfce45aa2c9cfc98bf71c0d4db8cd1113[m
Author: Wallace Breza <wallace@breza.me>
Date:   Wed Feb 13 09:57:06 2019 -0800

    Added data-tag-name attr to the tag element (#569)

[33mcommit c804afbfe8a11ddd8121496191f145034921822e[m
Author: P.J. Little <peter.jacob.little@gmail.com>
Date:   Wed Feb 13 09:00:10 2019 -0800

    Added v2 complexity report scripts. (#550)

[33mcommit b1c8cb353819b73a9c2788dd71c0b95566f7d0a2[m
Author: Phil <PIC123@users.noreply.github.com>
Date:   Tue Feb 12 17:40:49 2019 -0800

    Update canvastools and fix tests (#567)
    
    * Udate canvastools and fix tests
    
    * Update package

[33mcommit 1e7c1ef95540861998d2b61bb5cd7dc71db3c8d2[m
Author: Wallace Breza <wallace@breza.me>
Date:   Tue Feb 12 16:16:57 2019 -0800

    Fixed delete project bug AB#17024 (#568)
    
    * Fixed delete project bug
    
    * Added localized error for deleting project
    
    * Address PR feedback

[33mcommit 7a193a2c481d9766140fca95bd5f594e2f73d181[m
Author: My <mydiemho@users.noreply.github.com>
Date:   Tue Feb 12 13:44:10 2019 -0800

    [Fixes AB#16951] - support up/down & w/s key for navigating assets (#547)
    
    * support up/down & w/s key for navigating assets
    
    1. replace toolbar left/right button with up/down buttons
    to match keyboard
    1. add support for up/down & w/s key for moving between assets

[33mcommit 7d7ad854ee743452511970faa5ee440172567fd5[m
Author: Wallace Breza <wallace@breza.me>
Date:   Tue Feb 12 12:54:34 2019 -0800

    Update project when in-use connection changes AB#16921 (#564)
    
    * Update current project when connection changes
    
    * Removed redundant test in editor page
    
    * Updated toolbar to remove duplicate logic
    
    * Addressed PR feedback

[33mcommit 2887677701ed1f4ba06cd2fee84bb10b33ad63f5[m
Author: Wallace Breza <wallace@breza.me>
Date:   Tue Feb 12 09:36:02 2019 -0800

    Added localization for export JSON files AB#16387 (#554)
    
    * Added localization for export JSON files
    
    * Added missing description field for asset state
    
    * Updated display name properties on export providers

[33mcommit 42bda7247d2ab927eb647797f4e09a4f186831c9[m
Author: Wallace Breza <wallace@breza.me>
Date:   Mon Feb 11 08:48:25 2019 -0800

    Enhanced video support (#544)
    
    * WIP: Started refactoring canvas based assets
    
    * Wired up editor page for basic experience
    
    * WIP: Updated canvas to support single child element
    
    * Making progress
    
    * Got per frame tagging to work
    
    * Load and set child assets
    
    * Updated to filter out child assets from displaying in side bar
    
    * Fixed issue with image regions now redrawing
    
    * Integrated next/previous tagged frame buttons
    
    * Mixed rebase issues
    
    * Wabrez/video test coverage (#549)
    
    * Added unit tests for custom video player button
    
    * Added unit tests for image asset component
    
    * Added unit tests for video asset component
    
    * Canvas / Editor Page Test Coverage (#552)
    
    * Added unit tests for asset preview component
    
    * Moved components into correct location
    
    * Re-enabled canvas unit tests
    
    * Added more canvas unit tests
    
    * Refactored canvas and editor page tests
    
    * Addressed rebase/merge issues
    
    * Fixed issue instantiating canvas tools editor
    
    * Addressed PR feedback

[33mcommit 2db1be53e77e843a188b7ab07b1281c0c0b55b62[m
Author: Tanner Barlow <tanner.barlow12@gmail.com>
Date:   Fri Feb 8 08:32:50 2019 -0800

    Add support for keyUp and keyPress events (#539)
    
    * Add support for keyUp and keyPress
    
    * Add prop to keyboard binding for registering on key event type
    
    * Rename key event handler and added enums to event listener
    
    * lint fix
    
    * Add tests for keypress and keyup
    
    * Add tests for keyboard registration manager
    
    * Add key event type to JSDocs
    
    * response to PR feedback

[33mcommit 383512387010bc45fc89130cb63d5352330faf77[m
Author: Tanner Barlow <tanner.barlow12@gmail.com>
Date:   Thu Feb 7 09:26:47 2019 -0800

    Small refactor of canvas and editor page (#538)
    
    * Replace ITagMetadata with ITag, Refactor pieces of Canvas to make it easier for cut, copy, paste
    
    * Cleanup extraneous info
    
    * Remove unnecessary casts
    
    * Initial tests for canvas helpers
    
    * Update regex for color
    
    * Lint fix
    
    * Fix canvas helpers tests
    
    * Added test cases for canvas and helper
    
    * Dummy commit to kick off build
    
    * Add more helper unit tests
    
    * Lint fix

[33mcommit 0157db697aa0c2f1b21ccab2b2793964dc1e9f6d[m
Author: My <mydiemho@users.noreply.github.com>
Date:   Tue Feb 5 10:20:19 2019 -0800

    enable sonarcloud pr scan (#530)
    
    * update readme
       * update ci build badge link
       * add sonar cloud badges

[33mcommit 4dbbfa05adccd4ba59f028edf583b79f77ae22d1[m[33m ([m[1;33mtag: v2.0.0-preview.1[m[33m)[m
Author: Wallace Breza <wallace@breza.me>
Date:   Fri Feb 1 16:48:02 2019 -0800

    Reved package version and fixed minor bugs (#525)

[33mcommit 39fb38b7a062a99231045eec98aa1f44b8a02cde[m
Author: Wallace Breza <wallace@breza.me>
Date:   Fri Feb 1 16:00:16 2019 -0800

    Keyboard Manager Component (#523)
    
    * WIP - Started on keyboard manager
    
    * Added keyboard binding component
    
    * Updated existing unit tests
    
    * Added unit tests for keyboard registration manager
    
    * Added unit tests for keyboard manager component
    
    * Added unit tests for keyboard binding component
    
    * Added unit tests for previous/next asset in editor page
    
    * Updated unit tests for toolbar item
    
    * Removed direct reference to keyboard manager context - no longer needed

[33mcommit 488f80a9eaa1cda17592c66e025f0f82289743a3[m
Author: Luisa de Miranda <lemiranda@gmail.com>
Date:   Fri Feb 1 15:39:57 2019 -0800

    fixed typos and edited for clarity in README (#524)

[33mcommit db9176097ece6a8e7c6bfb684d9367b13da33234[m
Author: Elizabeth Halper <elhalper@microsoft.com>
Date:   Fri Feb 1 15:37:40 2019 -0800

    Elhalper/encoded filename (#518)
    
    * encodeurlcomponent not working
    
    * encoded files are loaded and getting rid of comments
    
    * moving logic to asset service
    
    * add encoded name test
    
    * remove unused code
    
    * remove comments
    
    * remove console statements
    
    * proper test and regex
    
    * fix lintint errors

[33mcommit d03f561edcd5cd2cb9f545e842a8751bea01b06d[m
Author: P.J. Little <peter.jacob.little@gmail.com>
Date:   Fri Feb 1 12:54:57 2019 -0800

    Updating docs for preview release (#520)

[33mcommit 1627fa7033933cfe9d14d437e63c95238e1f093e[m
Author: Jacopo Mangiavacchi <jmangia@me.com>
Date:   Fri Feb 1 10:55:40 2019 -0800

    TFRecords Reader and Builder-Reader integration tests (#517)
    
    * Use boundigBox
    
    * WIP: Adding TFRecords Reader
    
    * Read TFRecords with multiple records
    
    * change length as a property
    
    * Added TFRecords Builder-Reader integration tests
    
    * Adding Guard and resolving other pr feedback

[33mcommit 01d6fb69489c8618b5e42fbf99511277606d95b1[m
Author: Wallace Breza <wallace@breza.me>
Date:   Fri Feb 1 10:53:31 2019 -0800

    Simplify canvas component (#521)

[33mcommit a51dd064173af45968a4ba1d9ca01782c10061c7[m
Author: Wallace Breza <wallace@breza.me>
Date:   Fri Feb 1 08:45:00 2019 -0800

    Updated video position css (#519)

[33mcommit 9a5fa965f68425b3be0574ff9ac833ac8c7301ba[m
Author: Tom Miller <tmiller@microsoft.com>
Date:   Wed Jan 30 13:20:00 2019 -0800

    Updating Canvas to handle Videos and allow tagging - AB#16580 (#516)
    
    - Video player hooked into canvas tools
    - Simplified AssetPreview to not use Video player, instead use still image from video @ timestamp 5s
    - Update to only allow tag selection on videos when video is not playing
    - Updated tests to include regions and mock state callbacks for videos
    - Added Canvas error code type

[33mcommit 8198c4177520d82934e35706a7fb3b8d817308a6[m
Author: Jacopo Mangiavacchi <jmangia@me.com>
Date:   Tue Jan 29 13:57:21 2019 -0800

    Separate TFRecords code on different file (#514)
    
    * WIP: adding TFRecords Builder class
    
    * Added TFRecordsBuilder class
    
    * added unit test
    
    * Refactored AddFeature and AddFeatureArray interface
    
    * removed import

[33mcommit f0982c369e85cdcebc37f5adfc91a41670e67ca5[m
Author: Wallace Breza <wallace@breza.me>
Date:   Mon Jan 28 10:01:50 2019 -0800

    Updated editor/canvas CSS to take up full screen real estate (#511)
    
    * Updated editor/canvas CSS to take up full real estate
    
    * Fix lint error

[33mcommit 7a5a059be506aae6cf35c49c90d6d76a1d0e11f9[m
Author: Jacopo Mangiavacchi <jmangia@me.com>
Date:   Mon Jan 28 09:03:05 2019 -0800

    Moved asset path check in AssetService (#512)
    
    * adding file:// protocol to asset src
    
    * fix linting errors
    
    * package-lock
    
    * Moved path check in AssetService
    
    * Re-inserted jsdoc
    
    * add path protocol unit test

[33mcommit d54281c4b57a0d37e1fed3addd72eeee649f9236[m
Author: Phil <PIC123@users.noreply.github.com>
Date:   Mon Jan 28 07:51:00 2019 -0800

    Fix shape save issue after toolbar refactor (#505)
    
    * Fix shape save issue after toolbar refactor
    
    * Add initial test
    
    * Added MockFactory.waitForCondition(...) method
    
    * Add copyRect, remove unused modes

[33mcommit 03e9cb87c3f8732e934cb9ff118bfd1a24e33382[m
Author: Jacopo Mangiavacchi <jmangia@me.com>
Date:   Fri Jan 25 17:36:16 2019 -0800

    TFRecords exporter (#495)
    
    * WIG using TFRecord package
    
    * Testing Protocol Buffer generation
    
    * WIP Adding support for TFRecords ProtoBuf main containers
    
    * WIP Adding internal methods for TFRecord Features
    
    * WIP saving base64 and sha256 in TFRecords
    
    * get asset tags/region
    
    * WIP saving on TFRecords feature arrays
    
    * Exported Features and FeatureLists on TFRecords
    
    * WIG using TFRecord package
    
    * Testing Protocol Buffer generation
    
    * WIP Adding support for TFRecords ProtoBuf main containers
    
    * WIP Adding internal methods for TFRecord Features
    
    * WIP saving base64 and sha256 in TFRecords
    
    * get asset tags/region
    
    * WIP saving on TFRecords feature arrays
    
    * Exported Features and FeatureLists on TFRecords
    
    * removed test tag data
    
    * update tests
    
    * replaced string to utf-8 bytearray with custom implementation
    
    * testing also pbtxt file
    
    * excluded protocol buffer generated js file in codeconv
    
    * rename TFRecord/ProtoBuf features object
    
    * Added CRC to TFRecords
    
    * Added 32bit and 64bit CRCs
    
    * fix crc masking
    
    * Write all Int in Low Endian
    
    * Adding CRC to Buffer reusing V1 code
    
    * try different crc package (buffer-crc32)
    
    * Added TFRecords Helper file with utility methods for CRC and Buffer conversion
    
    * Added unit tests for TFRecords Helper functions
    
    * Fix Image encoding in TFRecords
    
    * Refactored asset image download
    
    * Added small comment on TFRecords write catch
    
    * Export tag index position too
    
    * Fix TFRecords features persistence
    
    * Fixed last TFRecords features

[33mcommit ae7dc90d4deb173cda8d3bf7864c06d4551c3196[m
Author: Wallace Breza <wallace@breza.me>
Date:   Fri Jan 25 15:19:55 2019 -0800

    Fix issue with saving project files (#509)
    
    * Fixed issue with saving project file
    
    * Fixed unit test for project service

[33mcommit 6d97cef60e5742849c8062c4ff6e29505e5afc0b[m
Author: Wallace Breza <wallace@breza.me>
Date:   Fri Jan 25 14:08:58 2019 -0800

    Catch and display errors (#508)
    
    * Added error codes to known errors
    
    * Restructured errors for localization
    
    * Added localized error messages for errors and messages
    
    * Created error handler component to display application errors
    
    * Added unit tests for error handler component
    
    * Added unit tests for error handler component
    
    * Updated setting AppError properties to resolve weird unit test failure
    
    * Addressed PR feedback

[33mcommit ed98ef2ce325b4f99dd7191907201570c2d14f83[m
Author: Wallace Breza <wallace@breza.me>
Date:   Fri Jan 25 10:51:55 2019 -0800

    Encrypt sensitive project settings (#506)
    
    * Split out appSettingsForm from appSettingsPage
    
    * Added tests for app settings page
    
    * Fixed merge conflictd issues
    
    * Added string localizations for app settings form updates
    
    * Started adding security token input component
    
    * Updating security token input component
    
    * Integrate security token into project settings
    
    * Renamed to proected input and reused for all senstive data fields
    
    * Added project encryption/decryption
    
    * Making progress on syncing encrypted/decrypted project data
    
    * Added unit tests to encrypt/decrypt object
    
    * Updated project service unit tests
    
    * Updated encrypted/decrypted data sync
    
    * Updated project action tests
    
    * Cleaned up unit tests
    
    * Fixed editor page unit tests
    
    * Fixing unit tests
    
    * Updated editor page tests
    
    * Refactored connection form tests
    
    * Added unit tests for protected input component
    
    * Added unit tests for security token picker
    
    * Merged unit test changes
    
    * Added unit test to verify new security token is created for new projects
    
    * Addressed PR feedback

[33mcommit 50bd9a3d86eb7269a6bc28ad2ec47a92aa24fa9a[m
Author: My <mydiemho@users.noreply.github.com>
Date:   Thu Jan 24 15:38:22 2019 -0800

    [AB#16776] fix error alert to not cover up app (#502)

[33mcommit 9eb0cec3b820c4be5d3e5eafcd41ea0b45ce91ec[m
Author: My <mydiemho@users.noreply.github.com>
Date:   Thu Jan 24 13:33:04 2019 -0800

    enable CI for greenkeeper created branches (#504)
    
    in order to test and integrate greenkeeper I have to enable CI on branches (right now it's disable). But I don't want this to run for all branches, so only enable it on greenkeeper-created branches which always starts with greenkeeper/

[33mcommit b8b1176a299735b2435698d98da96c6ee72707b6[m
Author: Phil <PIC123@users.noreply.github.com>
Date:   Wed Jan 23 16:42:46 2019 -0800

    v2 Editor Page (#417)
    
    * Start ct integration
    
    * Add componentdidmount
    
    * Update ct library
    
    * Update images in editor
    
    * Begin saving regions
    
    * Integrate ct as npm module
    
    * Cleanup a bit
    
    * Change ct back to git for now
    
    * Fix ct package
    
    * Saveregions after creation
    
    * Expose public methods of region manager in canvas
    
    * Fix IRegion type
    
    * Correctly bind exposed api calls
    
    * Add jsdocs and add types to exposed methods
    
    * Updated canvastool and fix scaling issue
    
    * Clean up comments
    
    * Fix linting issues
    
    * Updated canvastools and temporarily removed edoitorpage tests
    
    * Clean up onComponentDidMount and add snapsvg types temoporarily
    
    * Fixed linting..
    
    * fix file location issue
    
    * Begin footer work
    
    * Preserve first tag color and remove svg
    
    * Add tag control from footer. Still need to update canvstools for colors, toolbar removal/integration.
    
    * Update canvastools and hook up toolabr
    
    * Addimg tests back in
    
    * Update canvastools and fix scaling issue
    
    * Update region id to use shortid
    
    * Add integration tests from footer and linting
    
    * Add polygon support
    
    * Start adding mock canvas
    
    * install packages
    
    * Continue testing
    
    * Expose editor methods for testing and stub out canvas tests
    
    * Still testing
    
    * Setup canvas tools editor / regions manager mock
    
    * Add most tests
    
    * Add tests and change region to store tagmetadata
    
    * Remove ct toolbar style (depricated)
    
    * Fix tests
    
    * Fix test
    
    * Add toolbar integration tests
    
    * Small change for CI/CD
    
    * Refactor toolbar items to not take canvas or editormodechange
    
    * Address pr comments
    
    * Fix canvas test
    
    * Address more PR comments
    
    * Address latest comments, clean up
    
    * Fix conflict
    
    * Removed localStorage middleware from test runs

[33mcommit fd464691b03db0f383a09a0a2cd8a6fdd29cc09d[m
Author: Tom Miller <tmiller@microsoft.com>
Date:   Wed Jan 23 11:46:47 2019 -0800

    Adding video player to editor page - AB#16699 (#496)
    
    * Initial implementation of video player on editor page
    * Includes video player with customizable playback speed
    * Auto plays selected videos
    * No longer auto plays videos in side bar
    * Supports custom image to display when video not playing (defaults to 1st video frame)
    * Updates tests
    * Refactors a few other tests to centralize test asset creation
    * Updates version of React to 16.7.0
    * Rename IVideoSettings to IProjectVideoSettings for clarity

[33mcommit 2dd39d9137471ed55d84572de24253d4f64151a1[m
Author: My <mydiemho@users.noreply.github.com>
Date:   Tue Jan 22 20:16:47 2019 -0800

    move errorBoundary outside Router (#500)
    
    this broke navigation render, settings doesn't load until
    refresh

[33mcommit eba241b32d90b678782477c388723cc876fe43ee[m
Author: Wallace Breza <wallace@breza.me>
Date:   Tue Jan 22 14:57:23 2019 -0800

    Add security token to app settings page (#492)
    
    * Added custom object/array templates to app settings
    
    * Updated app setting form styling and rendering
    
    * Split out appSettingsForm from appSettingsPage
    
    * Added unit tests for app settings form, reducers and actions
    
    * Added tests for app settings page
    
    * Fixed merge conflictd issues
    
    * Added string localizations for app settings form updates

[33mcommit 9976a1be178faa5596346945a353d6608848cc05[m
Author: My <mydiemho@users.noreply.github.com>
Date:   Tue Jan 22 10:48:51 2019 -0800

    add npm script for using plato (#494)
    
    * add npm script for using plato
    * update compile target to es6

[33mcommit c173c7a432b38b6fef261390282c8d7bfa1d6080[m
Author: Tom Miller <tmiller@microsoft.com>
Date:   Fri Jan 18 12:48:54 2019 -0800

    Fixing bug introduced on default video settings (#489)
    
    * Fixing bug introduced when null project settings are passed and it tries to get default video settings (since we're using defaults from json, this code isn't needed)

[33mcommit 94bff595c9dfd8c0dfcdd87cefacabba2ac9c9de[m
Author: My <mydiemho@users.noreply.github.com>
Date:   Fri Jan 18 11:44:53 2019 -0800

    [AB#16670] add ErrorBoundary to top level app to catch render exception (#486)
    
    * [AB#16670] add ErrorBoundary to app to catch render exception
    
    also include an example in homepage on how to use the
    global error redux for caught exception.

[33mcommit 4935205b9adfeca730e80cd40b39934a208e1160[m
Author: Jacopo Mangiavacchi <jmangia@me.com>
Date:   Fri Jan 18 09:19:55 2019 -0800

    Standardize on POSIX Slash path separator and use Path.resolve() to support Windows convertion at runtime (#476)
    
    * standardize on POSIX Slash separator and use Path.resolve()
    
    * adding file:// protocol to asset src
    
    * fix linting errors
    
    * fix linting errors
    
    * Fixed replacement of http protocol in asset.path
    
    * package-lock

[33mcommit 7c0700eeb9f7fbc1f2f725d79f804a3079c2e465[m
Author: Wallace Breza <wallace@breza.me>
Date:   Thu Jan 17 13:54:05 2019 -0800

    Add Homepage verify project upload test (#491)
    
    * Added overload on flushUI that doesn't require func callback

[33mcommit 49d5ebb78f19c48c2ef85f77502dfe4a57ec11b7[m
Author: Wallace Breza <wallace@breza.me>
Date:   Thu Jan 17 10:01:32 2019 -0800

    Fixes issue where decrypted data is invalid and can't be parsed (#488)

[33mcommit 7a4f2e9c892fb0f00b0951028e048527905eb6f6[m
Author: My <mydiemho@users.noreply.github.com>
Date:   Wed Jan 16 16:28:06 2019 -0800

    replace travis with Azure pipeline (#487)
    
    azure pipelines has been running in parallel for a month
    and has been stable so far

[33mcommit e694ecca17e2454f877137621a4f1d7ae6b2fc2e[m
Author: My <mydiemho@users.noreply.github.com>
Date:   Wed Jan 16 12:56:18 2019 -0800

    [AB#16533] add global error redux for displaying alert (#485)
    
    * Fixes [AB#16533] add global error redux for displaying alert
    
    this is just the framework, next pr will be about using the redux

[33mcommit 9f4efc3d11cd239b4947ae7ccafab244bef9609b[m
Author: Wallace Breza <wallace@breza.me>
Date:   Wed Jan 16 10:25:55 2019 -0800

    Added crypto api to easily encrypt/decrypt data (#481)
    
    * Added encrypt/decrypt methods
    
    Completed unit tests for crypto methods
    
    * Refacted and simplified generateKey method

[33mcommit daef314890c26f19ef47ba5eba39b518375fb3e7[m
Author: Tom Miller <tmiller@microsoft.com>
Date:   Wed Jan 16 10:21:52 2019 -0800

    Video Settings added to project settings page AB#16627 (#484)
    
    * Adding video settings to project page
    * Adding tests for video settings
    * Adding default value for video settings and validating it with test
    * Mocking video settings for tests
    * Storing video settings within project

[33mcommit 3db621c3b0cb9f8c4eba0f6ee49d29a106a66b0e[m
Author: My <mydiemho@users.noreply.github.com>
Date:   Wed Jan 16 09:34:39 2019 -0800

    [AB#16434] modify messageBox and alert to accept show prop (#480)
    
    Fixes AB#16434

[33mcommit 22fa8708a981e643cea5a6e68cc02641f4b2c5c8[m
Author: Elizabeth Halper <elhalper@microsoft.com>
Date:   Wed Jan 16 09:17:10 2019 -0800

    Elhalper/duplicate project warning (#440)
    
    * throw error when duplicate project is added
    
    * throw error when duplicate project is added
    
    * fix linting errors
    
    * move logic to saveproject action
    
    * projectsettings test handles rejection
    
    * getting rid of positive test
    
    * add test and change editorpage test project
    
    * removing connectionspage test
    
    * changing connectionspage test
    
    * fixed merge errors
    
    * fixing connectionspage test
    
    * settings page positive test
    
    * checking out v2
    
    * change isunique logic
    
    * tests pass with good coverage
    
    * fix saveproject signature
    
    * moving isduplicate logic to projectservice
    
    * tests for isduplicate method
    
    * fix isDuplicate method
    
    * fix lint errors
    
    * adding isNew goBack logic to form submit

[33mcommit db5bfb54968b7219301838d335944832329521a2[m
Author: Tanner Barlow <tanner.barlow12@gmail.com>
Date:   Wed Jan 16 09:10:40 2019 -0800

    JSDocs for src/react directory (#477)
    
    * Clean up and document mock factory
    
    * JSDocs for src/common
    
    * Registration jsdocs
    
    * Document providers directory
    
    * lint fix
    
    * move around private functions in MockFactory
    
    * halfway through common components
    
    * docs for react/common directory
    
    * finished src/react/pages
    
    * docs for toolbar and shell directories
    
    * lint fix
    
    * response to feedback

[33mcommit f2ca6f8f3f5a983299ccb4f39ed1af82737a54e3[m
Author: Tanner Barlow <tanner.barlow12@gmail.com>
Date:   Wed Jan 16 07:47:52 2019 -0800

    docs for src/redux (#478)

[33mcommit 3307c3d90bfec3418e397806133bcc2d415cdd40[m
Author: Tanner Barlow <tanner.barlow12@gmail.com>
Date:   Wed Jan 16 07:47:33 2019 -0800

    JSDocs for src/services and src directories (#479)
    
    * JSDocs for src/services
    
    * JSDocs for src directory
    
    * lint fix

[33mcommit 0777268692843d3ddbb5548bb73346964977e260[m
Merge: 954d1ba a311915
Author: Jordan Ellis <5522128+JordanEllis6809@users.noreply.github.com>
Date:   Tue Jan 15 11:35:41 2019 -0800

    Merge pull request #472 from Microsoft/joelli/v2/debug-guide
    
    debug guide improvements

[33mcommit a31191552ca3970f3690868f538de67a48376492[m
Author: Jordan Ellis <joelli@microsoft.com>
Date:   Tue Jan 15 11:29:39 2019 -0800

    Debug guide changes based on feedback

[33mcommit 954d1bad6061fdb9364c9b176e6b754cfb72be41[m
Author: Tanner Barlow <tanner.barlow12@gmail.com>
Date:   Tue Jan 15 08:23:52 2019 -0800

    JSDocs for Common & Providers Directory (#474)
    
    * Clean up and document mock factory
    
    * JSDocs for src/common
    
    * Registration jsdocs
    
    * Document providers directory
    
    * lint fix
    
    * move around private functions in MockFactory

[33mcommit dcf7119b49f9fecd2849b278bde19c98b58f743d[m
Merge: 0eb08de eaf6b48
Author: Jacopo Mangiavacchi <jmangia@me.com>
Date:   Mon Jan 14 18:22:13 2019 -0800

    Merge pull request #465 from Microsoft/jamangia/tf-pascal-voc-exporter-v2
    
    16353 Extend TF Pascal VOC exporter

[33mcommit eaf6b48486f0b677032cece2b3b0601efaba67e4[m
Author: Jacopo Mangiavacchi <jamangia@microsoft.com>
Date:   Mon Jan 14 18:11:33 2019 -0800

    fix trailing space

[33mcommit d40ff56ea514c4eb85d6b27ca8b4898660af7723[m
Merge: 9073906 0eb08de
Author: Jacopo Mangiavacchi <jmangia@me.com>
Date:   Mon Jan 14 17:58:51 2019 -0800

    Merge branch 'v2' into jamangia/tf-pascal-voc-exporter-v2

[33mcommit 0eb08def19fe181908b071c45d88bf12734aea51[m
Author: Tanner Barlow <tanner.barlow12@gmail.com>
Date:   Mon Jan 14 14:59:35 2019 -0800

    Re-add onTagClicked (#468)
    
    * add on click
    
    * fix compile issue
    
    * use tags from mock factory
    
    * using createComponent to instantiate wrapper
    
    * move wrapper instantiation to tests
    
    * add tests for click validation
    
    * lintfix
    
    * fix lint error from v2

[33mcommit f78eb354c0daf7599e99a9b2d218aaadec1da7fc[m
Author: Wallace Breza <wallace@breza.me>
Date:   Mon Jan 14 10:56:14 2019 -0800

    Host Process Unit Tests (#473)
    
    * Added host process tests
    
    * Added unit tests for host process and setup env vars
    
    * Cleaned up unused references
    
    * Reverted test:ci script to pre host process changes

[33mcommit b80d4914a6e8ba3e210cd14541d0854b6d2c150e[m
Author: Wallace Breza <wallace@breza.me>
Date:   Mon Jan 14 10:45:10 2019 -0800

    Azure Custom Vision Export Provider - Phase 2 (#470)
    
    * Started implementation of asset export
    
    * Completed export of image assets with regions and tags
    
    * Added unit tests for azure custom vision service wrapper
    
    * Updated existing custom vision export provider unit tests
    
    * Added export tests for azure custom vision provider
    
    * Added custom vision export provider unit tests
    
    * Added unit tests for getAssetBlob method
    
    * Added unit tests for createQueryString
    
    * Added unit tests for save and export toolbar items
    
    * Added unit tests to verify creating images from blob

[33mcommit 21ee815dd6236f0cfd4996c5f8d5147ff0c749bb[m
Author: Tanner Barlow <tanner.barlow12@gmail.com>
Date:   Mon Jan 14 07:38:33 2019 -0800

    Clean up and document mock factory (#467)
    
    * Clean up and document mock factory
    
    * lint fix

[33mcommit 90739064d63516c94afc74f555fe9a1ade82e7fd[m
Author: Jacopo Mangiavacchi <jamangia@microsoft.com>
Date:   Fri Jan 11 18:52:46 2019 -0800

    Refactored template using interpolate()

[33mcommit 8c2fc661f3836cac462f2933f75691deb7ef6ee9[m
Author: JordanEllis6809 <joelli@microsoft.com>
Date:   Fri Jan 11 15:46:00 2019 -0800

    debug guide improvements

[33mcommit dd94b36f9afa2ccaba0a25f72c156010e8c7b3c6[m
Merge: 9800560 63c73e6
Author: Jordan Ellis <5522128+JordanEllis6809@users.noreply.github.com>
Date:   Fri Jan 11 15:12:36 2019 -0800

    Merge pull request #459 from Microsoft/joelli/v2/storage-provider-filters
    
    HostProcessType Provider Filters

[33mcommit 980056074ed12d0728c7e93560692032227ce07c[m
Merge: db53bbc dd2ed73
Author: Luisa de Miranda <lemiranda@gmail.com>
Date:   Fri Jan 11 15:01:10 2019 -0800

    Merge pull request #469 from Microsoft/wabrez/app-homepage-bug
    
    Luisa app homepage bug fix AB#16462

[33mcommit dd2ed73c3330511aceb6aff3dbafb444088ffdcc[m
Author: Luisa de Miranda <lumirand@microsoft.com>
Date:   Thu Jan 10 15:16:42 2019 -0800

    added tests for mainContentRouter routes and redirect

[33mcommit 28279a4f2b08ccc590ea97c7d54995fc232423bc[m
Author: Luisa de Miranda <lumirand@microsoft.com>
Date:   Wed Jan 9 14:10:00 2019 -0800

    much better way of handling default route; fixed linter error

[33mcommit 7b09a6db058f3f2852269999e3b2a06d2512e7de[m
Author: Luisa de Miranda <lumirand@microsoft.com>
Date:   Tue Jan 8 17:48:39 2019 -0800

    put the 'exact' back in connectionPage route

[33mcommit 129f54d59bc5a8d9368c0986e5c010e23894f82e[m
Author: Luisa de Miranda <lumirand@microsoft.com>
Date:   Tue Jan 8 17:45:50 2019 -0800

    fixed error in react-router-dom and electron interaction that prevented initial homepage loading

[33mcommit 70ac1ef8485e23b0de00955eba9bdb34fd0cbd8c[m
Author: Luisa de Miranda <lumirand@microsoft.com>
Date:   Tue Jan 8 17:48:39 2019 -0800

    put the 'exact' back in connectionPage route

[33mcommit 56e271600cf76f2f4f72222e8692fc6a57034d3c[m
Author: Luisa de Miranda <lumirand@microsoft.com>
Date:   Tue Jan 8 17:45:50 2019 -0800

    fixed error in react-router-dom and electron interaction that prevented initial homepage loading

[33mcommit db53bbcb90b57201c0b7ca85cc566c22f2d30199[m
Author: Tom Miller <tmiller@microsoft.com>
Date:   Fri Jan 11 13:50:53 2019 -0800

    Adding default export filter and updating tests - AB#16446 (#466)
    
    * Updating export factory to register first provider as the default, and the export form to use the default provider if one is not provide. Fixed the tests as well.
    
    * Adding default handler test, updating OnSubmit test to verify it saves correct settings
    
    * Fixing missing rename of CreateComponent
    
    * Fixing misspelling of registry

[33mcommit b56c71f11fc6c9a8d8a5052e08ea88fa18a82af8[m
Author: Jacopo Mangiavacchi <jamangia@microsoft.com>
Date:   Fri Jan 11 13:27:03 2019 -0800

    Solved different PR comments

[33mcommit 63c73e6d61d5531ba0f1397176c52bbc7f3c6712[m
Author: JordanEllis6809 <joelli@microsoft.com>
Date:   Fri Jan 11 13:20:40 2019 -0800

    simplified tests

[33mcommit a129d03f3d1b8592837429fbbb4ef996f0e25a63[m
Author: JordanEllis6809 <joelli@microsoft.com>
Date:   Fri Jan 11 13:09:36 2019 -0800

    ignore electron startup script

[33mcommit 24fd5c1014bf4f4df1e92eaf160af26e89acad85[m
Author: JordanEllis6809 <joelli@microsoft.com>
Date:   Fri Jan 11 12:06:11 2019 -0800

    fix tsc error

[33mcommit 2045f2a7a4ac0582567356dfa6d64b070a583ce2[m
Author: JordanEllis6809 <joelli@microsoft.com>
Date:   Fri Jan 11 10:44:46 2019 -0800

    changes based on feedback

[33mcommit 4c5d113a3e0e73febed7c8cee7e737fda8c7c25f[m
Author: Jacopo Mangiavacchi <jamangia@microsoft.com>
Date:   Fri Jan 11 08:45:54 2019 -0800

    removed call to exportProject in exportPage

[33mcommit c3d0c1ccb5bf1fe8abfc0f27eaa1820eca8413a6[m
Author: Jordan Ellis <joelli@microsoft.com>
Date:   Thu Jan 10 20:53:26 2019 -0800

    whoops

[33mcommit c638918baa3465d3590ecf47322337e9c505b958[m
Author: Jordan Ellis <joelli@microsoft.com>
Date:   Thu Jan 10 20:39:51 2019 -0800

    tslint error...

[33mcommit 63ab29cb7709f737dbd72cbdcd4d2c1a599159aa[m
Merge: 9cceab0 1556453
Author: Jordan Ellis <joelli@microsoft.com>
Date:   Thu Jan 10 19:43:55 2019 -0800

    merge

[33mcommit 9cceab038fe5f1a5d8004a515dfc7f8d3c98481a[m
Author: Jordan Ellis <joelli@microsoft.com>
Date:   Thu Jan 10 18:58:01 2019 -0800

    registerProviders tests

[33mcommit 9902f9bada538fc62eaa3e707e2a8febaf87847a[m
Author: Jacopo Mangiavacchi <jamangia@microsoft.com>
Date:   Thu Jan 10 18:50:05 2019 -0800

    Fixed tests

[33mcommit 55e834818611548b1e370094a8ef347c24b79128[m
Author: Jacopo Mangiavacchi <jamangia@microsoft.com>
Date:   Thu Jan 10 18:41:08 2019 -0800

    Shuffling Tag Array before split to test/train

[33mcommit 336c3de4ec613c68170fe39e14ea5448e72bf2e2[m
Author: Jacopo Mangiavacchi <jamangia@microsoft.com>
Date:   Thu Jan 10 17:12:35 2019 -0800

    Using TS Map vs JS Object

[33mcommit 6e4d2ca87113b5ad14e9dbf0ab22a7a5ee0ea0c3[m
Author: Jacopo Mangiavacchi <jamangia@microsoft.com>
Date:   Thu Jan 10 15:43:48 2019 -0800

    Added exportUnassignedTags flag support

[33mcommit 1556453d104c3aea1ae87f80035a78c57400bb09[m
Author: Tanner Barlow <tanner.barlow12@gmail.com>
Date:   Thu Jan 10 13:32:03 2019 -0800

    Refactor EditorTagsInput & Add Hotkey Support - AB#15733 (#463)
    
    * displaying index in editor page tags
    
    * added both editor tags input and project settings tags input
    
    * tests for both sub components, removed abstract class test
    
    * fix project form merge conflict
    
    * listening to number hot keys in editor page
    
    * trying to get component to listen to keys
    
    * listening to hot keys
    
    * lint fix
    
    * fix test for rendering html in tags
    
    * Added test for not rendering tag indices
    
    * remove unnecessary util function
    
    * fix compiler issues
    
    * update tag colors path from test
    
    * add hot key test
    
    * lint fix

[33mcommit ae5dc586f52921747c35150290225ec8880893ee[m
Author: Jordan Ellis <joelli@microsoft.com>
Date:   Thu Jan 10 13:24:10 2019 -0800

    decimal bit representation

[33mcommit 2c1864a2cade1d153eeb86d9e0f29516c4621c90[m
Author: Jordan Ellis <joelli@microsoft.com>
Date:   Thu Jan 10 13:09:04 2019 -0800

    fixed electron lookup + removed unneeded debug FAQ

[33mcommit a502b54022e06d24ead91581f95fb5a57bbd4af4[m
Author: Jordan Ellis <joelli@microsoft.com>
Date:   Thu Jan 10 13:03:09 2019 -0800

    fixed tests + optional arg + localFileSystemProxy Electron only

[33mcommit 471cbf2536e057292ee3c6033e1679f98608d38c[m
Author: Tom Miller <tmiller@microsoft.com>
Date:   Thu Jan 10 12:49:32 2019 -0800

    Fixing broken merge (#464)

[33mcommit 55466cfad800e521b2cc183111b2c68c58ec4a0b[m
Author: Jacopo Mangiavacchi <jamangia@microsoft.com>
Date:   Thu Jan 10 12:34:24 2019 -0800

    WIP Persisting ImageSets file

[33mcommit d51039851a301e4e2084d69ca4f4cdb3ce178131[m
Author: Tom Miller <tmiller@microsoft.com>
Date:   Thu Jan 10 12:25:02 2019 -0800

    Using registered providers for exports rather than hard coded lists - AB#16448 (#462)
    
    * Adding display name for export provider during registration
    
    * Using registered export providers in export form, rather than hard coding them.

[33mcommit bdf2202027807db5f6cc01f9829f6c06f4f20a0a[m
Author: Jordan Ellis <joelli@microsoft.com>
Date:   Thu Jan 10 12:23:18 2019 -0800

    better electron start script diagnostics

[33mcommit 3f12cc46c0fecc2031d128ccf080d96ce78fd98b[m
Merge: 736e3e0 efb6391
Author: Jacopo Mangiavacchi <jamangia@microsoft.com>
Date:   Thu Jan 10 12:10:04 2019 -0800

    Merge branch 'jamangia/tf-pascal-voc-exporter-v2' of https://github.com/Microsoft/VoTT into jamangia/tf-pascal-voc-exporter-v2

[33mcommit 736e3e088c8662bbf0a296eed6b381a377f26828[m
Author: Jacopo Mangiavacchi <jamangia@microsoft.com>
Date:   Thu Jan 10 11:52:55 2019 -0800

    WIP ImageSets export

[33mcommit 910086c16ddfc61e7be19d78b5b35ba2e77c0b3f[m
Author: Jacopo Mangiavacchi <jamangia@microsoft.com>
Date:   Wed Jan 9 16:23:00 2019 -0800

    Refactoring assets.map with internal method

[33mcommit 55aa7160127418f8d674da5547135787006fc383[m
Author: Jacopo Mangiavacchi <jamangia@microsoft.com>
Date:   Wed Jan 9 16:00:22 2019 -0800

    Added common utility method for loading asset size from buffer

[33mcommit 64cff6bf8b0b0f5c9e679ee04981cbc656401271[m
Author: Jacopo Mangiavacchi <jamangia@microsoft.com>
Date:   Wed Jan 9 14:48:02 2019 -0800

    Check if asset image size already available

[33mcommit 041c34b281d0499f22a0bf0caf32d2df18bc2a9f[m
Author: Jacopo Mangiavacchi <jamangia@microsoft.com>
Date:   Wed Jan 9 11:38:19 2019 -0800

    Updated Tests for tag/annotations

[33mcommit 5cab176acc1fb94022f65dc3672bc75cf004f379[m
Author: Jacopo Mangiavacchi <jamangia@microsoft.com>
Date:   Tue Jan 8 17:02:58 2019 -0800

    WIP Exporting Image tags/regions

[33mcommit 35ae5db50e4d2f6b4228dc2dccc1329cc9c57020[m
Author: Jacopo Mangiavacchi <jamangia@microsoft.com>
Date:   Tue Jan 8 14:46:12 2019 -0800

    fix auto export project issue

[33mcommit dd87cc61e9d986623069d0c682ba52fd53dd374a[m
Author: Jacopo Mangiavacchi <jamangia@microsoft.com>
Date:   Tue Jan 8 14:28:40 2019 -0800

    WIP exportAnnotations

[33mcommit f2696d63cdb17e6813d047b42c4c965726653457[m
Author: Jacopo Mangiavacchi <jamangia@microsoft.com>
Date:   Mon Jan 7 16:26:29 2019 -0800

    Creating annotation xml template

[33mcommit 6a2513f09ffd5ab8b1bc4f22c3d658a4d9388919[m
Author: Jacopo Mangiavacchi <jamangia@microsoft.com>
Date:   Mon Jan 7 14:52:50 2019 -0800

    Exporting Image Info Dictionary

[33mcommit a13addf5f9364bed3890096624f0c82241a7ec3b[m
Author: Jacopo Mangiavacchi <jamangia@microsoft.com>
Date:   Fri Dec 21 14:01:06 2018 -0800

    Re-added exportProject call in exportPage.  Removed electron posinstall in package.json

[33mcommit efb63914a7cd8121cbd43490d79eb26168cf4b6d[m
Author: Jacopo Mangiavacchi <jamangia@microsoft.com>
Date:   Thu Jan 10 11:52:55 2019 -0800

    WIP ImageSets export

[33mcommit 18eb19f6895b4a4cd1f7e5d098222ca62bdf3560[m
Author: Wallace Breza <wallace@breza.me>
Date:   Thu Jan 10 09:51:02 2019 -0800

    Azure Custom Vision Export Provider - Phase 1 - AB#15637 (#461)
    
    * Started on azure custom vision export provider
    
    * Added formContext to reference formData in export form
    
    * Updated azure custom vision form with dependent properties
    
    * Added save logic to ACV export provider
    
    * Updated custom vision export provider saving
    
    * Added unit tests for azure custom vision export provider
    
    * Added unit tests for external field picker

[33mcommit b6873b0b413226ebaba6401e4d05cf788d68b74e[m
Merge: 53789a3 a8bbdc3
Author: Elizabeth Halper <elhalper@microsoft.com>
Date:   Wed Jan 9 20:00:03 2019 -0800

    Merge pull request #460 from Microsoft/myho/modifyCodecov
    
    set explicit target for patch coverage

[33mcommit e755e68b6c594afafbffa188f69c9e020fa86ed9[m
Author: Jacopo Mangiavacchi <jamangia@microsoft.com>
Date:   Wed Jan 9 16:23:00 2019 -0800

    Refactoring assets.map with internal method

[33mcommit a8bbdc37cf71070c2b72f978932b1013454407c5[m
Author: My Ho <mydiemho@gmail.com>
Date:   Wed Jan 9 16:14:16 2019 -0800

    set explicit target for patch coverage
    
    otherwise it will use the current coverage of base branch

[33mcommit 645e899d490d065b18db1cbebadf14b87b4dae18[m
Author: Jacopo Mangiavacchi <jamangia@microsoft.com>
Date:   Wed Jan 9 16:00:22 2019 -0800

    Added common utility method for loading asset size from buffer

[33mcommit 0f178ae374147c4f7df60d4501a94131643f7cb9[m
Author: JordanEllis6809 <joelli@microsoft.com>
Date:   Wed Jan 9 15:55:16 2019 -0800

    don't register if not supported

[33mcommit 35882ca5da81be9fc18a81f0d0573f8fb944c2b8[m
Merge: fcbb843 53789a3
Author: JordanEllis6809 <joelli@microsoft.com>
Date:   Wed Jan 9 15:35:02 2019 -0800

    merge v2

[33mcommit fcbb8433bd421143702a2898744935c5ed34bfb4[m
Author: JordanEllis6809 <joelli@microsoft.com>
Date:   Wed Jan 9 15:33:16 2019 -0800

    removed uneeded changes

[33mcommit 79687c7b4f2f0d15c79b1f850920bf240f394520[m
Author: Jacopo Mangiavacchi <jamangia@microsoft.com>
Date:   Wed Jan 9 14:48:02 2019 -0800

    Check if asset image size already available

[33mcommit 5898f26949abfc3f989b1823e6f51ffc258eb603[m
Author: Jacopo Mangiavacchi <jamangia@microsoft.com>
Date:   Wed Jan 9 11:38:19 2019 -0800

    Updated Tests for tag/annotations

[33mcommit a37025c29d969954c03f6effdcc3f50673006b59[m
Author: JordanEllis6809 <joelli@microsoft.com>
Date:   Wed Jan 9 10:14:13 2019 -0800

    fixed linter errors

[33mcommit 53789a3f4b66163a629660f69325807cb0337359[m
Author: Tanner Barlow <tanner.barlow12@gmail.com>
Date:   Wed Jan 9 10:09:01 2019 -0800

    Filtering out asset providers for target connection (#453)
    
    * Filtering out asset providers for target connection
    
    * rename asset provider and storage provider
    
    * update import in mock for connection provider picker test

[33mcommit 702dbd3c91c3b3560535bf5dfc2b2136d559c49b[m
Author: Jacopo Mangiavacchi <jamangia@microsoft.com>
Date:   Tue Jan 8 17:02:58 2019 -0800

    WIP Exporting Image tags/regions

[33mcommit f843079eb94815a3b10871050901cc72eab73479[m
Author: Jordan Ellis <joelli@microsoft.com>
Date:   Tue Jan 8 15:48:05 2019 -0800

    added platform support for registration + trying to get debugging working

[33mcommit e3641754535fb24d55bfc87a0ccc6262ede64046[m
Author: Jacopo Mangiavacchi <jamangia@microsoft.com>
Date:   Tue Jan 8 14:46:12 2019 -0800

    fix auto export project issue

[33mcommit 9d1a469a72fe5991ef67480c07f01b590a105867[m
Merge: 430c7e1 98c9f72
Author: Jacopo Mangiavacchi <jamangia@microsoft.com>
Date:   Tue Jan 8 14:33:08 2019 -0800

    Merge branch 'jamangia/tf-pascal-voc-exporter-v2' of https://github.com/Microsoft/VoTT into jamangia/tf-pascal-voc-exporter-v2

[33mcommit 430c7e10cdf34c33535f2ebd5c87bfccffcd4419[m
Author: Jacopo Mangiavacchi <jamangia@microsoft.com>
Date:   Tue Jan 8 14:28:40 2019 -0800

    WIP exportAnnotations

[33mcommit c2f696ccef0b0e34ffc0ccaed6cc76252219336f[m
Author: Jacopo Mangiavacchi <jamangia@microsoft.com>
Date:   Mon Jan 7 16:26:29 2019 -0800

    Creating annotation xml template

[33mcommit 826d2d5845233dfd2002cf41825216ea6a30bc0f[m
Author: Jacopo Mangiavacchi <jamangia@microsoft.com>
Date:   Mon Jan 7 14:52:50 2019 -0800

    Exporting Image Info Dictionary

[33mcommit 7ed1d34557e385cb0aa0886b583a7217caad5ef9[m
Author: Jacopo Mangiavacchi <jamangia@microsoft.com>
Date:   Fri Dec 21 14:01:06 2018 -0800

    Re-added exportProject call in exportPage.  Removed electron posinstall in package.json

[33mcommit 98c9f7257cebb16dd7355542cc7d770de6dd6cf7[m
Author: Jacopo Mangiavacchi <jamangia@microsoft.com>
Date:   Tue Jan 8 14:28:40 2019 -0800

    WIP exportAnnotations

[33mcommit 4e43bdf838103c06c454fdc706a2c803e796c5f0[m
Merge: 6d0f643 525f175
Author: Phil <PIC123@users.noreply.github.com>
Date:   Tue Jan 8 13:42:18 2019 -0800

    Merge pull request #455 from Microsoft/tbarlow12/tags-save-project-patch
    
    Fix save project on tags change bug

[33mcommit 6d0f64386f532e5bfbcbaa37cbee9fd1c363d7af[m
Author: Luisa de Miranda <lemiranda@gmail.com>
Date:   Tue Jan 8 12:10:17 2019 -0800

    Lumirand css fix AB#16414 AB#16444 (#454)
    
    * min width set on Editor Page Sidebar
    
    * added min width to editor page content also

[33mcommit 525f1756b950a73c5e2ea0f64f13b6cd764b4c0e[m
Author: Tanner Barlow <tanner.barlow12@gmail.com>
Date:   Tue Jan 8 12:03:57 2019 -0800

    Fix save project on tags change bug

[33mcommit d0cfe2195149d4334f4fc70c0262fff013be3436[m
Author: Jordan Ellis <joelli@microsoft.com>
Date:   Tue Jan 8 11:51:50 2019 -0800

    removed dep change

[33mcommit e2f1d71cf0f3971871885cfcd711a5230e4a55b0[m
Author: Jordan Ellis <joelli@microsoft.com>
Date:   Tue Jan 8 11:47:41 2019 -0800

    removed from state, made into module

[33mcommit d8e8b7d80da9c3acc7210b3c2a01430e995e59f5[m
Author: Jordan Ellis <joelli@microsoft.com>
Date:   Tue Jan 8 11:17:57 2019 -0800

    simplified, removed redundant information

[33mcommit 3f1f5ff1bf15e6ae34b592a163c08a864155cfef[m
Author: Tanner Barlow <tanner.barlow12@gmail.com>
Date:   Tue Jan 8 08:22:32 2019 -0800

    Optional initialization for Asset Provider on connection creation (#451)
    
    * test azure initialize and connection form asset provider initialization
    
    * lintfix
    
    * fix connections page tests
    
    * initial connection service
    
    * add initialize to mock
    
    * dummy commit
    
    * lint fix
    
    * fix async test for azure blob storage

[33mcommit 6df8a5b713c4b64ce4ab2f9b6e3f9df3301b508a[m
Author: Jacopo Mangiavacchi <jamangia@microsoft.com>
Date:   Mon Jan 7 16:26:29 2019 -0800

    Creating annotation xml template

[33mcommit c13ec4e523be402a9f2e3002e45155d8777925ca[m
Author: Jordan Ellis <joelli@microsoft.com>
Date:   Mon Jan 7 16:16:13 2019 -0800

    fixed up appContext's hostProcess & os props

[33mcommit b817e6f8bd9a489944da4d0893457fe6cc445dc0[m
Author: Jacopo Mangiavacchi <jamangia@microsoft.com>
Date:   Mon Jan 7 14:52:50 2019 -0800

    Exporting Image Info Dictionary

[33mcommit c7f8683a9ff863dfaf58c857df1a0714feab4a97[m
Author: Jordan Ellis <joelli@microsoft.com>
Date:   Mon Jan 7 13:51:49 2019 -0800

    init process & os contextual info

[33mcommit 973737092eec4b8593bdca3b1d4ddae45e289829[m
Merge: ecebe10 50235ba
Author: Jacopo Mangiavacchi <jamangia@microsoft.com>
Date:   Mon Jan 7 13:14:32 2019 -0800

    Merge branch 'jamangia/tf-pascal-voc-exporter-v2' of https://github.com/Microsoft/VoTT into jamangia/tf-pascal-voc-exporter-v2

[33mcommit ecebe10dba586ceebc9631a99c827f6951605634[m
Author: Jacopo Mangiavacchi <jamangia@microsoft.com>
Date:   Fri Dec 21 14:01:06 2018 -0800

    Re-added exportProject call in exportPage.  Removed electron posinstall in package.json

[33mcommit 50235baa94899dd193342199c425125985d1ef5f[m
Merge: ea70442 a88ea57
Author: Jacopo Mangiavacchi <jamangia@microsoft.com>
Date:   Mon Jan 7 13:09:45 2019 -0800

    merged package.json

[33mcommit ea70442b9d56f1827a7e283ca3e48ab9958728af[m
Author: Jacopo Mangiavacchi <jamangia@microsoft.com>
Date:   Fri Dec 21 14:01:06 2018 -0800

    Re-added exportProject call in exportPage.  Removed electron posinstall in package.json

[33mcommit ba82f012abacfd35935176ad38905dd521542a69[m
Author: Wallace Breza <wallace@breza.me>
Date:   Mon Jan 7 10:13:42 2019 -0800

    Created connection provider picker to dynamically load provider list (#448)
    
    * Created connection provider picker to dynamically load provider list
    
    * Updated existing unit tests
    
    * Added unit tests for connection provider picker

[33mcommit da85e8dfc9bf395be93ee50cf00b6c1c8e5ae0ce[m
Author: Tanner Barlow <tanner.barlow12@gmail.com>
Date:   Mon Jan 7 09:58:24 2019 -0800

    Fix storage type property on AzureBlobStorage Provider (#450)

[33mcommit b268fc79cc72dcc7dec1e3fd898f0f2080db7f68[m
Author: Tanner Barlow <tanner.barlow12@gmail.com>
Date:   Mon Jan 7 07:28:42 2019 -0800

    Remove StorageType from IConnection and move to IStorageProvider (#447)
    
    * all tests passing except cloud picker filter
    
    * instantiate mock storage provider from connection and fix test
    
    * lint fix
    
    * fix cloud file picker tests
    
    * rename enums

[33mcommit b1cf06cb4b7920b5e3c945f58246fe040114a50f[m
Author: My <mydiemho@users.noreply.github.com>
Date:   Fri Jan 4 14:44:10 2019 -0800

    [AB#16330] Set up codecov support (#441)
    
    1. Modify linux agent test run to upload coverage report to codecov.
    1. Enable pr comment so codecov can post back report to PR.
    1. Enable commit status so it will block if coverage goes down.

[33mcommit cd6517f80e570b2503d8dc257ec77616827d6cea[m
Author: My <mydiemho@users.noreply.github.com>
Date:   Fri Jan 4 14:05:04 2019 -0800

    [AB#16374] set up editor config (#445)
    
    * enforce consistent style

[33mcommit 7d0c16f1abf0606d752a54f61fc45d17a515efb8[m
Author: Wallace Breza <wallace@breza.me>
Date:   Fri Jan 4 13:50:24 2019 -0800

    Updated CSS styling for tags component (#446)

[33mcommit 13ba7cdc7c94c6bd86e3ecd971537e86c6cc6e38[m
Author: Tanner Barlow <tanner.barlow12@gmail.com>
Date:   Fri Jan 4 11:55:45 2019 -0800

    Open project from cloud storage (#434)
    
    * open cloud project modal
    
    * lintfix
    
    * setting initial state on close
    
    * update local project title
    
    * only showing cloud connections in modal
    
    * basic tests
    
    * rebase on upstream v2
    
    * lintfix
    
    * setting initial state on close
    
    * update local project title
    
    * only showing cloud connections in modal
    
    * basic tests
    
    * async tests for component flow
    
    * clean up imports
    
    * add type check for typescript compiling
    
    * replaced test projects and connections with mock factory
    
    * adding connection type upon creation
    
    * add ref to cloud picker and fix tests
    
    * keep picker open when 'Go Back' is clicked
    
    * rename button handlers
    
    * remove unnecessary flush promises
    
    * fix enum keys
    
    * fix enum keys

[33mcommit 4449d6bc1036e1ccd3e6f80237ed8d411125e719[m
Author: Tanner Barlow <tanner.barlow12@gmail.com>
Date:   Fri Jan 4 11:47:24 2019 -0800

    Set Azure Blob as default storage provider (#443)
    
    * Set Azure Blob as default storage provider, fix tests
    
    * lint fix
    
    * fix strings test

[33mcommit 1d3b205d4a8c39af9caecaa02fac7715b448cdbb[m
Author: Wallace Breza <wallace@breza.me>
Date:   Fri Jan 4 11:43:52 2019 -0800

    Refactored tests to use enzyme methods vs. direct DOM methods (#444)

[33mcommit 825f3269b8d4648e77428a96b8fed5e05bdbecd6[m
Author: Wallace Breza <wallace@breza.me>
Date:   Fri Jan 4 10:14:15 2019 -0800

    Unit Test Improvements (#439)
    
    * Added new unit tests for html file reader
    
    * Added more coverage to asset service tests
    
    * Updated local file system unit tests to use mock file system
    
    * Fixed imports, vars based on PR feedback
    
    * Updated asset file extension suffix
    
    * Reverted use of mock-fs, not supported in newer node versions

[33mcommit 943949f3604dee2e538eee98920d46c2ba8db489[m
Author: Wallace Breza <wallace@breza.me>
Date:   Fri Jan 4 08:20:58 2019 -0800

    Refactored confirm/alert/messagebox components (#442)
    
    * Abstracted confirm and alert components from messagebox
    
    * Updated messagebox to auto-close on any button click
    
    * Finished refactor of confirm/alert components with messagebox

[33mcommit d72d7fb421b8bc705e44da134828415c54bae3c3[m
Author: Tanner Barlow <tanner.barlow12@gmail.com>
Date:   Thu Jan 3 12:51:01 2019 -0800

    File Extension Constants (#435)
    
    * replace file extensions with constant values
    
    * add asset file extension constant
    
    * lint fixes

[33mcommit c14f7e244e26c09a030411c5cc1e27c582acf550[m
Author: Tanner Barlow <tanner.barlow12@gmail.com>
Date:   Thu Jan 3 12:48:12 2019 -0800

    Save project on tags change (#438)
    
    * Save project on tags change
    
    * lintfix

[33mcommit dbb6a308040444ac111f62e377432c5a5e89cebf[m
Author: Wallace Breza <wallace@breza.me>
Date:   Wed Jan 2 17:00:31 2019 -0800

    Added basic confirmation component (#416)
    
    * Added basic confirmation compoennt
    
    * Added unit tests for confirm component
    
    * Fixed tsc compile warnings
    
    * Moved vars into beforeEach block

[33mcommit 3e1e7a1c28d0900889012dce230768bf110d0ed5[m
Author: My <mydiemho@users.noreply.github.com>
Date:   Wed Jan 2 14:58:32 2019 -0800

    use bash shell in all agents (#432)
    
    1. previous iteration was mistakenly using the Shell task and that was not compatible with react-scripts, resulting in missing logs.
    1. fix is to use Bash to run all commands

[33mcommit e28dd900c6359b612127a819c4215ea9bbd7b341[m
Author: Phil <PIC123@users.noreply.github.com>
Date:   Wed Jan 2 08:09:50 2019 -0800

    fix file location issue (#431)

[33mcommit a581e6c5aa435a21a27874ba3b152bff5581763f[m
Author: Tanner Barlow <tanner.barlow12@gmail.com>
Date:   Sun Dec 30 11:49:39 2018 -0800

    Simple Contribution Guidelines (#424)
    
    * initial stab at docs
    
    * Basic contribution guideliens for PRs and Issues
    
    * fix typos

[33mcommit 1e8b82c10a886a29b1d663073b4525aca998bdc1[m
Author: Tanner Barlow <tanner.barlow12@gmail.com>
Date:   Sun Dec 30 11:49:27 2018 -0800

    Organize common components into directories, udpate imports (#429)

[33mcommit a55593887e6372c20586bc6bc236a8c01936241a[m
Author: Tanner Barlow <tanner.barlow12@gmail.com>
Date:   Fri Dec 28 10:03:32 2018 -0700

    TagsInput Component Optional Click Handlers (#410)
    
    * Testing shift key and ctrl key
    
    * finalize unit tests
    
    * jsdocs on tagsInput
    
    * remove editmode property
    
    * clean up and organize
    
    * fix comment on react tags converter
    
    * fix editor footer tests
    
    * fix conflicts and update tests with new modal

[33mcommit be5a8f1792689ca107febd0cf064368fad3ba535[m
Author: Tanner Barlow <tanner.barlow12@gmail.com>
Date:   Fri Dec 28 08:53:17 2018 -0700

    Azure Blob Storage Provider using updated SDK (#426)
    
    * Azure implementation with new Azure storage SDK and unit tests
    
    * organize imports
    
    * move around dependencies
    
    * update dependencies
    
    * update dependencies
    
    * rename and register azure blob storage
    
    * azure working with SAS
    
    * fix package.json
    
    * add initialize function to azure blob storage
    
    * new test for getFileName, initialize provider in each test
    
    * revert default connection to bing image search to satisfy connection page test
    
    * fix strings test with connections form

[33mcommit 0beaa5323985c39e15b1b4054a18ae7fd4bb5e37[m
Author: Tanner Barlow <tanner.barlow12@gmail.com>
Date:   Fri Dec 28 05:46:43 2018 -0700

    Localization of application strings, English & Spanish support (#415)
    
    * started basic localization implementation
    
    * add connection settings string
    
    * lint fix
    
    * helper function to replace variables in json
    
    * remove variable replacer from strings.ts
    
    * Replacing values in json files
    
    * testing english and spanish translations
    
    * lintfix
    
    * update test format
    
    * reformat tests again
    
    * using ts interfaces rather than json files
    
    * Fix spanish translation
    
    * testing all JSON schemas for english and spanish
    
    * replaced all inline text with localized strings
    
    * lint fixes and add translations
    
    * defaults to spanish to find non-localized strings
    
    * translate provider json schemas
    
    * lint fixes and rename language files
    
    * add loc values on same line as require
    
    * lint fix

[33mcommit e3da69730b5b279fd7726cb691b8b28ae16c2496[m
Author: Tanner Barlow <tanner.barlow12@gmail.com>
Date:   Fri Dec 28 04:21:02 2018 -0700

    Replace old modal with Reactstrap Modal (#421)
    
    * fixed test cases
    
    * fix tags input test
    
    * fix editor footer test

[33mcommit 6800dc3642b235a8f1a32c69f6956507df43ad9c[m
Author: My <mydiemho@users.noreply.github.com>
Date:   Fri Dec 21 14:08:25 2018 -0800

    also run tests on windows and mac machines (#418)

[33mcommit a88ea57120dbf309e5e82fcc5e6790f2548bf365[m
Author: Jacopo Mangiavacchi <jamangia@microsoft.com>
Date:   Fri Dec 21 14:01:06 2018 -0800

    Re-added exportProject call in exportPage.  Removed electron posinstall in package.json

[33mcommit 07b20e42376f672ce7a7042675e72e399cf1f77f[m
Merge: 5faec4b 21fc602
Author: Jacopo Mangiavacchi <jmangia@me.com>
Date:   Fri Dec 21 13:02:38 2018 -0800

    Merge pull request #405 from Microsoft/jamangia/tf-pascal-voc-exporter
    
    TensorFlow Pascal VOC Exporter

[33mcommit 5faec4b8134f64c4ba4dfb98c83997febb40cbbc[m
Author: Tanner Barlow <tanner.barlow12@gmail.com>
Date:   Fri Dec 21 13:52:37 2018 -0700

    Tag Editor Modal Fix & Tests (#414)
    
    * passing all tests, skipping simulate change on fields
    
    * reverted back to old format w/ onchange & componentDidUpdate
    
    * use 'onOk' rather than 'onSubmit'
    
    * all tests passing except for modifying name
    
    * all tests passing except for modifying name
    
    * fix modal test to run with setProps, update Ok and Cancel button orders in other tests
    
    * fix style of buttons
    
    * organize imports
    
    * additional asserts on function calls

[33mcommit 21fc602e8ea4fe63be1c58a74fa037d1735338b3[m
Author: Jacopo Mangiavacchi <jamangia@microsoft.com>
Date:   Fri Dec 21 12:49:48 2018 -0800

    Renamed results variable

[33mcommit 03e6329fc423ba01f9760d2120f5a7225f573d67[m
Merge: 2f5252e 250b383
Author: Jacopo Mangiavacchi <jamangia@microsoft.com>
Date:   Fri Dec 21 11:55:14 2018 -0800

    Merge branch 'v2' into jamangia/tf-pascal-voc-exporter
    
    # Conflicts:
    #       src/common/mockFactory.ts

[33mcommit 2f5252eb3e6ca144cab2bdd271bf39109286045b[m
Author: Jacopo Mangiavacchi <jamangia@microsoft.com>
Date:   Fri Dec 21 11:41:59 2018 -0800

    Several fixes from PR comments

[33mcommit 84ed7595213e9af016157592a2ac8736dcc50baf[m
Author: Jacopo Mangiavacchi <jamangia@microsoft.com>
Date:   Fri Dec 21 10:21:29 2018 -0800

    Fixed bug with wrong image

[33mcommit 250b383eb159dad2ed7339d533799e9ea4b14773[m
Author: Jordan Ellis <5522128+JordanEllis6809@users.noreply.github.com>
Date:   Fri Dec 21 09:16:42 2018 -0800

    ConnectionPage & ConnectionForm Tests (#397)
    
    * start of tests
    
    * testing updates
    
    * tests
    
    * more tests
    
    * test
    
    * more progress
    
    * connections page test
    
    * more progress...
    
    * tests working
    
    * minor changes
    
    * CI fix
    
    * testing
    
    * stubbing out saveConnection
    
    * left in some nice to haves for further investigating
    
    * Fixed broken tests, added override to prevent local storage state loading from local storage
    
    * Fixed merge conflicts from v2
    
    * Updated test to set bing image search provider options
    
    * Updated unit test to support refactory of connection delete

[33mcommit 04d57b64431a4ce8a511a559bb855b544cd2f3e1[m
Author: Jacopo Mangiavacchi <jamangia@microsoft.com>
Date:   Fri Dec 21 09:02:28 2018 -0800

    Fix: wait for loading all image base64 buffer

[33mcommit b748558a5471da7e651c92bc2a9be9ffd506a041[m
Merge: 5c2a601 b3dbd57
Author: Elizabeth Halper <elhalper@microsoft.com>
Date:   Fri Dec 21 10:09:18 2018 -0500

    Merge pull request #403 from Microsoft/elhalper/15626/editor-page-test
    
    Elhalper/15626/editor page test

[33mcommit efa74b65bf14b744f346eb5c735ab57fcec8711e[m
Author: Jacopo Mangiavacchi <jamangia@microsoft.com>
Date:   Thu Dec 20 20:59:54 2018 -0800

    WIG Loading images at runtime converting to base64

[33mcommit 6b2837465d07dbf3ac8063cbd043c753435c1600[m
Author: Jacopo Mangiavacchi <jamangia@microsoft.com>
Date:   Thu Dec 20 18:37:04 2018 -0800

    Added unit test and some fix

[33mcommit b3dbd571e41bfebccf1a9c51ce479bc3116320b9[m
Author: Wallace Breza <wallace.breza@microsoft.com>
Date:   Thu Dec 20 17:54:09 2018 -0800

    Updated tests to verify project actions were called as expected

[33mcommit e62859616adbd3aadb602943c7966165584b7898[m
Author: Jacopo Mangiavacchi <jamangia@microsoft.com>
Date:   Thu Dec 20 17:40:43 2018 -0800

    Export file pascal_label_map.pbtxt

[33mcommit 5c2a60111f9a70d36818e907a2323ef478921bb0[m
Author: Wallace Breza <wallace@breza.me>
Date:   Thu Dec 20 16:05:03 2018 -0800

    Global Form UI Cleanup (#413)
    
    * Updated project form ui
    
    * Cleaned up project form validation
    
    * Cleaned up connection form UI
    
    * Applied updated UI styles and validation to export form

[33mcommit 58c3addd46ee3ebb10213e394138e5f48afa6b01[m
Author: Elizabeth Halper <elhalper@microsoft.com>
Date:   Thu Dec 20 18:04:35 2018 -0500

    tests pass with unhandled promise rejection warning

[33mcommit f573b20d68761be780721707a4be7b8c94c88154[m[33m ([m[1;33mtag: v2.0-beta-0.1[m[33m)[m
Author: My <mydiemho@users.noreply.github.com>
Date:   Thu Dec 20 13:29:50 2018 -0800

    pipeline for building release artifact (#412)

[33mcommit 8a307ff1580d73b5d32be5995f55fc06784893c1[m
Merge: f6172e9 62975ef
Author: Elizabeth Halper <elhalper@microsoft.com>
Date:   Thu Dec 20 14:23:24 2018 -0500

    Merge branch 'v2' into elhalper/15626/editor-page-test
    
    the rebase will not work

[33mcommit f6172e9f9e060fcc6f4afa9bc3fe5ad14a0df9e4[m
Author: Elizabeth Halper <elhalper@microsoft.com>
Date:   Thu Dec 20 14:17:27 2018 -0500

    saving changes for rebase

[33mcommit 62975effa29c405fe0e7ee508665316863673100[m
Merge: 6cb9369 17a55b2
Author: Elizabeth Halper <elhalper@microsoft.com>
Date:   Thu Dec 20 14:12:16 2018 -0500

    Merge pull request #411 from Microsoft/wabrez/editor-sidebar-select-asset
    
    Fixes issue with testing editor sidebar selection

[33mcommit 5edfddc641104babc32f421e3d317c3dbf0f6c25[m
Author: Elizabeth Halper <elhalper@microsoft.com>
Date:   Thu Dec 20 14:09:18 2018 -0500

    fix linting errors

[33mcommit 6cb936988c0f532c3a821f002ad3c2322f768fc0[m
Author: Wallace Breza <wallace@breza.me>
Date:   Thu Dec 20 10:58:37 2018 -0800

    [AB#16328] Fixes issues with running app from static files (#404)
    
    * Modified to support running off of local static build
    
    * Added silent flag to coverage script
    
    * Updated azure-piplines.yml to point to correct location
    
    * clean up and merge changes from My's branch
    
    * fix file path
    
    * update package-lock.json
    
    * refactor webpack configs

[33mcommit 17a55b2cf9973a56a4532e1e8d7b412d426a033f[m
Author: Wallace Breza <wallace.breza@microsoft.com>
Date:   Thu Dec 20 10:22:10 2018 -0800

    Fixed issue with testing editor sidebar selection

[33mcommit 895c6a4419a836d5038de35bbca4f5c7ef05a24f[m
Author: Tanner Barlow <tanner.barlow12@gmail.com>
Date:   Thu Dec 20 09:55:43 2018 -0700

    register a new asset provider inside a test

[33mcommit 1090df762f07f9525787fdcdce375e0b69450588[m
Author: Elizabeth Halper <elhalper@microsoft.com>
Date:   Thu Dec 20 11:38:20 2018 -0500

    asset provider error

[33mcommit b3f3909cfa21daf5423fa3fa9fcc985798146146[m
Merge: be26144 4c73ac4
Author: Jacopo Mangiavacchi <jamangia@microsoft.com>
Date:   Wed Dec 19 14:32:56 2018 -0800

    Merge branch 'jamangia/tf-pascal-voc-exporter' of github.com:Microsoft/VoTT into jamangia/tf-pascal-voc-exporter
    
    # Conflicts:
    #       src/registerProviders.ts

[33mcommit be261444c4bade4b5165f06ed02372dc461f025f[m
Author: Jacopo Mangiavacchi <jamangia@microsoft.com>
Date:   Wed Dec 19 14:12:33 2018 -0800

    Implemented unit test on folder and jpeg exporting

[33mcommit 2555634a7f21c63b17e32d0d8b4e8b537ae627e3[m
Author: Jacopo Mangiavacchi <jamangia@microsoft.com>
Date:   Wed Dec 19 13:38:19 2018 -0800

    Migrated to Axios from Fetch for browser compatibility

[33mcommit 83397fd74e5441e5ada17468c65bfb2372d42961[m
Author: Jacopo Mangiavacchi <jamangia@microsoft.com>
Date:   Wed Dec 19 13:14:29 2018 -0800

    Basic test on subfolder creation

[33mcommit f55702357f8f7f0e9a7215aa84d11caf87747532[m
Author: Jacopo Mangiavacchi <jamangia@microsoft.com>
Date:   Tue Dec 18 13:43:34 2018 -0800

    Refactoring creating private functions for exporting steps

[33mcommit 105b2cb12a52f5985f0f5417ff26f171ae1314cd[m
Author: Jacopo Mangiavacchi <jamangia@microsoft.com>
Date:   Tue Dec 18 12:02:38 2018 -0800

    Refactoring Images Export to a private function

[33mcommit 5aba76a840dbf5f16a0be00d4a724f92809aa291[m
Author: Jacopo Mangiavacchi <jamangia@microsoft.com>
Date:   Tue Dec 18 11:54:23 2018 -0800

    Wait all promises when exporting images

[33mcommit b70d0d101bcbf6215905ed5449bfa6fd58a8968f[m
Author: Jacopo Mangiavacchi <jamangia@microsoft.com>
Date:   Mon Dec 17 17:07:27 2018 -0800

    Exporting images

[33mcommit e40ee1a9e01fb3be1b82c973d1962ca5c70fe2f3[m
Author: Jacopo Mangiavacchi <jamangia@microsoft.com>
Date:   Mon Dec 17 16:28:28 2018 -0800

    WIP Exporting Images

[33mcommit ee61127a17b18091316547fdd4d2d8fb7971f25c[m
Author: Jacopo Mangiavacchi <jamangia@microsoft.com>
Date:   Mon Dec 17 13:27:06 2018 -0800

    Created config & skeleton for TensorFlow Pascal Voc exporter

[33mcommit 48aa990cfbe8625501a9fb52c246a810b2652419[m
Author: Jacopo Mangiavacchi <jacopomangiavacchi@gmail.com>
Date:   Fri Dec 14 16:05:17 2018 -0800

    Configuring provider and creating output folder

[33mcommit 4c73ac483bd184c0b17e02c4faf9d4fb625386de[m
Author: Jacopo Mangiavacchi <jamangia@microsoft.com>
Date:   Wed Dec 19 14:12:33 2018 -0800

    Implemented unit test on folder and jpeg exporting

[33mcommit ae4f44523a145bb4642b1d545baa331b724c7d93[m
Author: Jacopo Mangiavacchi <jamangia@microsoft.com>
Date:   Wed Dec 19 13:38:19 2018 -0800

    Migrated to Axios from Fetch for browser compatibility

[33mcommit 156c878441347c5c1ef5f57347d274fbf691101c[m
Author: Elizabeth Halper <elhalper@microsoft.com>
Date:   Wed Dec 19 16:24:57 2018 -0500

    removing footer comments

[33mcommit 7f8f4f53ee61964af03bfb19d1e839f3567dc1e8[m
Author: Elizabeth Halper <elhalper@microsoft.com>
Date:   Wed Dec 19 16:24:16 2018 -0500

    removing footer comments

[33mcommit a70ee83d4525d2cdac0c274d429874ea4c30744f[m
Author: Elizabeth Halper <elhalper@microsoft.com>
Date:   Wed Dec 19 16:20:47 2018 -0500

    add onAssetSelected handler test

[33mcommit fa7cc9c3bf13d32b15519651df31b512c446588a[m
Author: Jacopo Mangiavacchi <jamangia@microsoft.com>
Date:   Wed Dec 19 13:14:29 2018 -0800

    Basic test on subfolder creation

[33mcommit baad661bcb66b00d00a943806c9973f8d9756da3[m
Author: Tanner Barlow <tanner.barlow12@gmail.com>
Date:   Wed Dec 19 13:59:14 2018 -0700

    remove old azure SDK from project, new azure implementation waiting on dependency update (#400)

[33mcommit 7cd7be99eef1d9093656dadcdcf95e6118d4be69[m
Author: Tanner Barlow <tanner.barlow12@gmail.com>
Date:   Wed Dec 19 13:57:58 2018 -0700

    Silence console during npm test (#402)

[33mcommit d079be1f3991d32e9a17a50f923e6fc74fb67238[m
Merge: 33bad25 583a067
Author: Elizabeth Halper <elhalper@microsoft.com>
Date:   Wed Dec 19 14:19:19 2018 -0500

    rebase v2

[33mcommit 33bad25601cc37d887d4a39524a14493c7c0a53c[m
Author: Elizabeth Halper <elhalper@microsoft.com>
Date:   Wed Dec 19 14:03:59 2018 -0500

    getting rid of console statements

[33mcommit 61b6a4bdd5da07cc12b2bd59da53c555b4793613[m
Author: Elizabeth Halper <elhalper@microsoft.com>
Date:   Tue Dec 18 17:23:45 2018 -0800

    tests pass

[33mcommit 23387ec128b088aca66228e8a31c942bcfc463ba[m
Author: Elizabeth Halper <elhalper@microsoft.com>
Date:   Mon Dec 17 13:56:47 2018 -0800

    fixing project actions

[33mcommit 91f4b93eece6cfd243da7703f26c677ed7ffc68a[m
Author: Elizabeth Halper <elhalper@microsoft.com>
Date:   Tue Dec 18 10:50:05 2018 -0800

    editor page error gone

[33mcommit 334e8423f07c58dd28af585a3ead13e5d1311d7b[m
Author: Elizabeth Halper <elhalper@microsoft.com>
Date:   Tue Dec 18 10:20:10 2018 -0800

    get rid of old code

[33mcommit 464ee9aa8b08837892068dbc3d7e2db5b76d8867[m
Author: Elizabeth Halper <elhalper@microsoft.com>
Date:   Mon Dec 17 13:56:47 2018 -0800

    fixing project actions

[33mcommit 583a067718856757f05f5e51260901e7f7c1f564[m
Author: Elizabeth Halper <elhalper@microsoft.com>
Date:   Wed Dec 19 14:03:59 2018 -0500

    getting rid of console statements

[33mcommit 7048481af1e91be2cbb1f20ca0f36927798b765d[m
Author: Tanner Barlow <tanner.barlow12@gmail.com>
Date:   Wed Dec 19 10:15:14 2018 -0700

    Add JSDocs and Cleanup TagsInput, Modal, ProjectForm, Tests (#396)
    
    * Docs and cleanup of ProjectForm, TagsInput, Modal and tests
    
    * remove state type restriction
    
    * address PR feedback
    
    * lintfix

[33mcommit d8b1016f536e372b32c0489e6c9c81863c0b4659[m
Author: Wallace Breza <wallace@breza.me>
Date:   Wed Dec 19 03:25:24 2018 -0800

    Custom Field Wrapper for objects in JSON schema form (#398)
    
    * Attempting to create a custom field
    
    * Adding custom field component
    
    * Process on Custom Field
    
    * Updated custom field props mapping
    
    * Minor updates to use form typings

[33mcommit f68224eafe2f86c48f1677264a10ea50268bcc1c[m
Author: Wallace Breza <wallace@breza.me>
Date:   Wed Dec 19 03:24:24 2018 -0800

    v2 Bug Fixes - 16299, 16301 (#399)
    
    * Added auto-generated id to new connection instances
    
    * Fixed bug where key is not added on toolbar groups

[33mcommit 8e86537e4699075e03bbe7793064eb07d88a80a9[m
Merge: 205c3ae bd93fd6
Author: Elizabeth Halper <elhalper@microsoft.com>
Date:   Tue Dec 18 17:24:50 2018 -0800

    tests pass

[33mcommit 205c3aeeb83041efd0530f91cf06e04550e616c0[m
Author: Elizabeth Halper <elhalper@microsoft.com>
Date:   Tue Dec 18 17:23:45 2018 -0800

    tests pass

[33mcommit 751732c9beb1f43cc81d67e36c9ef7b239dac3b5[m
Author: Jacopo Mangiavacchi <jamangia@microsoft.com>
Date:   Tue Dec 18 13:43:34 2018 -0800

    Refactoring creating private functions for exporting steps

[33mcommit 549ef7a529b6a52e87b99b89dc351c7bc9659eed[m
Author: Tanner Barlow <tanner.barlow12@gmail.com>
Date:   Tue Dec 18 13:24:09 2018 -0700

    Project Form Bug Fix & Increased Test Coverage (#395)
    
    * turned off form validation, submitting tags object array
    
    * form accepting tag objects
    
    * project form now accepts object with validate
    
    * nest tags input in form
    
    * test case for submitting a project
    
    * restructure tests and add modifying test
    
    * clean up project form test

[33mcommit b4eca133433ad7fa40b8210d84f1432891b39043[m
Author: Jacopo Mangiavacchi <jamangia@microsoft.com>
Date:   Tue Dec 18 12:02:38 2018 -0800

    Refactoring Images Export to a private function

[33mcommit 66968a92e93cb6702c242d74c84028c282815730[m
Author: Jacopo Mangiavacchi <jamangia@microsoft.com>
Date:   Tue Dec 18 11:54:23 2018 -0800

    Wait all promises when exporting images

[33mcommit 3474963aeb6096b2f089671b63a534462aa98df1[m
Author: Elizabeth Halper <elhalper@microsoft.com>
Date:   Tue Dec 18 10:50:05 2018 -0800

    editor page error gone

[33mcommit c36c2d7c55cca1a348e18136238b4f51f284488e[m
Author: Elizabeth Halper <elhalper@microsoft.com>
Date:   Tue Dec 18 10:20:10 2018 -0800

    get rid of old code

[33mcommit ad94e190a1e0d96fb85ce1c02da7efa2fc766680[m
Author: Elizabeth Halper <elhalper@microsoft.com>
Date:   Mon Dec 17 13:56:47 2018 -0800

    fixing project actions

[33mcommit bd93fd61645f4d570f235539c18f6b2a5a7b0eb0[m
Author: Elizabeth Halper <elhalper@microsoft.com>
Date:   Tue Dec 18 10:50:05 2018 -0800

    editor page error gone

[33mcommit 2dd2e8df64f7c290c35d84b7206dbb3f7ed99fd5[m
Author: Elizabeth Halper <elhalper@microsoft.com>
Date:   Tue Dec 18 10:20:10 2018 -0800

    get rid of old code

[33mcommit b08a06ce3baf4cf7235221298a751372fcc8cd2e[m
Author: Wallace Breza <wallace@breza.me>
Date:   Tue Dec 18 09:38:46 2018 -0800

    Redux actions unit tests (#392)
    
    * Added unit tests for application actions
    
    * Cleaned up whitespace
    
    * Added unit tests for application, connection and project actions
    
    * Added return type to redux actions
    
    * Cleaned up test names

[33mcommit 75e84253ede8f6f31d6ef36ba0f8d94775633ddd[m
Author: Jacopo Mangiavacchi <jamangia@microsoft.com>
Date:   Mon Dec 17 17:07:27 2018 -0800

    Exporting images

[33mcommit 2f6e736bb8e1fe4ad6446283cf695fe642de3046[m
Author: Jacopo Mangiavacchi <jamangia@microsoft.com>
Date:   Mon Dec 17 16:28:28 2018 -0800

    WIP Exporting Images

[33mcommit 90c0e066da7ad219f2c60cc41bca0b11569c4e1a[m
Author: Wallace Breza <wallace@breza.me>
Date:   Mon Dec 17 14:01:11 2018 -0800

    Editor Toolbar components (#387)
    
    * Added toolbar components
    
    * Created toolbarItemFactory tests
    
    * Added editor toolbar unit tests
    
    * Added unit tests for toolbar button component
    
    * Fixed how props are pass down into toolbar items

[33mcommit 8869bda70317f4d942884da2a28689271de7e6d5[m
Author: Elizabeth Halper <elhalper@microsoft.com>
Date:   Mon Dec 17 13:56:47 2018 -0800

    fixing project actions

[33mcommit 3f90d04630d643a3641eeec7def52545c4f89c2f[m
Author: Jacopo Mangiavacchi <jamangia@microsoft.com>
Date:   Mon Dec 17 13:27:06 2018 -0800

    Created config & skeleton for TensorFlow Pascal Voc exporter

[33mcommit 355b7328b613712654895784e663109b168ef484[m
Author: My <mydiemho@users.noreply.github.com>
Date:   Mon Dec 17 11:41:36 2018 -0800

    cleaning up yaml syntax (#389)

[33mcommit ed42e00115b25cc0875199fe942eda4c91b5d507[m
Author: Wallace Breza <wallace@breza.me>
Date:   Mon Dec 17 11:38:43 2018 -0800

    Added unit tests for project service (#382)
    
    * Added unit tests for project service
    
    * Fixed spelling error

[33mcommit c8629fa55c1104cdce9cbec282b2cfbdb95a0d54[m
Author: Jacopo Mangiavacchi <jacopomangiavacchi@gmail.com>
Date:   Fri Dec 14 16:05:17 2018 -0800

    Configuring provider and creating output folder

[33mcommit d5d71920ad0a94acfa127a8aff489b6a42e949ad[m
Author: Wallace Breza <wallace@breza.me>
Date:   Fri Dec 14 10:19:33 2018 -0800

    Fixed tsc compile errors from JSON files (#381)
    
    * Changed json file import to require to fix tsc bug
    
    * Added npm 'compile' script to run 'tsc' command

[33mcommit a7d9c9fd338808dc3062831892c78773abbdd961[m
Author: Tanner Barlow <tanner.barlow12@gmail.com>
Date:   Fri Dec 14 10:19:23 2018 -0800

    prevent deletion of tag with backspace (#383)

[33mcommit b0f821da484bef629c16fea7b8953c99ed38d95a[m
Author: Tanner Barlow <tanner.barlow12@gmail.com>
Date:   Thu Dec 13 18:08:11 2018 -0800

    Project Settings Tests & Mock Factory (#363)
    
    * passing initial tests
    
    * remove empty test for now
    
    * added test to project settings page, can't simulate submit still
    
    * converting incoming tag string to object
    
    * passing all project form tests
    
    * response to PR feedback - consolidated mock factories and removing provider/router from mock
    
    * consolidated project form test
    
    * added explicit on change handler for tags component, removed props.value call from implicit handler
    
    * remove provider from enzyme wrapper
    
    * clean up unused variables and imports
    
    * Resolved merge conflicts with mock factory

[33mcommit bc8b2a2089ba30ccc59548ee04f84c6d79a8fd3a[m
Author: Wallace Breza <wallace@breza.me>
Date:   Thu Dec 13 14:30:06 2018 -0800

    Redux Reducer Test Coverage (#367)
    
    * Added test for redux reducers
    
    * Added better typescript support for redux actions/reducers
    
    * Added local storage middleware

[33mcommit 1bfbdc2c46195dd2631fb878fd2646bc44d2fe83[m
Author: My <mydiemho@users.noreply.github.com>
Date:   Thu Dec 13 11:44:18 2018 -0800

    add pipeline status to Readme and add trigger for v2 update (#375)
    
    * add pipeline status to Readme and add trigger for v2 update
    
    * fix syntax
    
    * remove extra bracket

[33mcommit 51b1bbd2b07a70701bbe645794566f1e8b359f43[m
Author: My <mydiemho@users.noreply.github.com>
Date:   Thu Dec 13 11:13:11 2018 -0800

    templatize azure pipeline (#372)
    
    this will replace travis

[33mcommit caad81eeb2b7b1bd0629126698b748cb2928ff23[m
Author: Wallace Breza <wallace@breza.me>
Date:   Thu Dec 13 10:26:03 2018 -0800

    Remove canvas tools dependency, its causing issues (#373)

[33mcommit b3f894b2e9101aa9a33661d5f9fc779f2a6bb831[m
Author: Jacopo Mangiavacchi <jmangia@me.com>
Date:   Wed Dec 12 13:56:28 2018 -0800

    updated package.json (#365)

[33mcommit 475da4d80b0e4af5f88adbc0943367537be6cfae[m
Author: Wallace Breza <wallace@breza.me>
Date:   Wed Dec 12 10:17:01 2018 -0800

    Add styles on editor sidebar based on asset state (#361)
    
    * Integrate virtual scroll plugin into editdor sidebar
    
    * Added css styles for sidebar state
    
    * Updated state management for asset changes
    
    * Added tests for current project reducer

[33mcommit 108a72fd40f3dd68f385a4d942af0240f0405449[m
Author: Wallace Breza <wallace@breza.me>
Date:   Tue Dec 11 16:21:58 2018 -0800

    Added empty href to link which was causing discrepency between styles (#356)

[33mcommit 0fadd93c887f55dec86868f101e14a0d5ae18a25[m
Author: Wallace Breza <wallace@breza.me>
Date:   Tue Dec 11 16:21:43 2018 -0800

    Integrate virtual scroll component into editor sidebar (#358)
    
    * Fixed tsc compile error on editor footer component
    
    * Integrate virtual scroll plugin into editdor sidebar
    
    * Added test file
    
    * Added unit tests for editor sidebar component
    
    * Updated failing unit tests

[33mcommit 9a03d05ebb5a577cdfa8beaa3f6c6dac30eec2e9[m
Merge: d051861 5acc4f9
Author: Jordan Ellis <5522128+JordanEllis6809@users.noreply.github.com>
Date:   Tue Dec 11 14:53:04 2018 -0800

    Merge pull request #359 from Microsoft/joelli/initial-state-cleanup
    
    removed unused initial state test code

[33mcommit d0518613636310cba28829f486f7cb5863848dd3[m
Author: Tanner Barlow <tanner.barlow12@gmail.com>
Date:   Tue Dec 11 14:50:25 2018 -0800

    fix colors of tag editor (#355)

[33mcommit 7ad02f6101c9baaae04e2ed3d5da5fd1d3781be2[m
Author: Tanner Barlow <tanner.barlow12@gmail.com>
Date:   Tue Dec 11 14:48:36 2018 -0800

    Retrieving Assets from Azure Blob Storage in editor page (#354)
    
    * opening images from azure blob storage
    
    * cleanup
    
    * match azure blob container naming rules in regex
    
    * lint fixes
    
    * refactor test with new changes
    
    * adding azure assets
    
    * remove .js extension from module name

[33mcommit 955db88cfe01561de699a36148f9ee3462ee9b9a[m
Author: Wallace Breza <wallace@breza.me>
Date:   Tue Dec 11 11:45:08 2018 -0800

    Fixed tsc compile error on editor footer component (#357)

[33mcommit 5acc4f99ccd859daefb53195bf0401a6c3bf084e[m
Author: Jordan Ellis <joelli@microsoft.com>
Date:   Tue Dec 11 11:22:35 2018 -0800

    removed unused test code

[33mcommit 2e15f6ed43b36a8aeac5542998e56ce285b06c69[m
Author: Tanner Barlow <tanner.barlow12@gmail.com>
Date:   Mon Dec 10 13:20:16 2018 -0800

    moved changes to main repo (#352)

[33mcommit 67d9f2ad96fce8d0e17f7e4fbe407ff1e7fccc88[m
Author: Wallace Breza <wallace@breza.me>
Date:   Mon Dec 10 09:55:32 2018 -0800

    Export Provider interface & core implementation (#349)
    
    * Started on export provider interface / base provider
    
    * Added export provider interface with tests
    
    * Added unit tests for json export provider
    
    * Addded export tests for json export provider
    
    * Added export page & export form and wired up export into UI
    
    * Added additional unit tests to verify vott json export options
    
    * Added export page unit tests
    
    * Added unit tests for export form component
    
    * Added comments to export classes

[33mcommit d5bbb256dd2108cecf2ee01f0c7ad7d649af25cb[m
Author: Tanner Barlow <tanner.barlow12@gmail.com>
Date:   Thu Dec 6 12:04:01 2018 -0800

    Custom Input Tags Widget w/ Tag editing and color display (#13)
    
    * changing color of tag text via text property on object
    
    * initializing random color, cycling through colors
    
    * padding and margin same for tags and input field
    
    * can affect tag on click
    
    * color boxes next to tag text
    
    * changing tag in state and re-rendering
    
    * get index of tag
    
    * adjusting tag in place in state
    
    * editing tag, but submits form
    
    * editing tag in modal, only one character though
    
    * basic modal for editing tags
    
    * refactored to use color names
    
    * submitting stringified json to get around string restriction
    
    * parsing tags object after submission
    
    * remove breakpoints
    
    * lint fixes
    
    * remove empty block from scss file
    
    * remove duplicate file and redirect import statement
    
    * rename tag widget directory to match file
    
    * utils test
    
    * remove empty test
    
    * import colors scss file
    
    * first unit test
    
    * initial tests for tags input component
    
    * expand tags input tests
    
    * response to PR feedback
    
    * remove empty tag creation
    
    * Adjust text and size of input, fix bug of updated tags

[33mcommit 4366dd311d63f3eae821c69d60644aacee55ca67[m
Author: Elizabeth Halper <elhalper@microsoft.com>
Date:   Thu Dec 6 10:50:58 2018 -0800

    Test/15626/homepage (#20)
    
    * add test shell and initial mocks
    
    * fixing homepage mock
    
    * add test shell and initial mocks
    
    * fixing homepage mock
    
    * rebased master and test has no errors
    
    * add render test content
    
    * open project button click test passes
    
    * Link render test succeeds
    
    * render condensedlist test passes
    
    * render file picker test passes
    
    * address PR comments

[33mcommit 8b84fa15725fe0b98f74fc738b8533ade1735501[m
Author: Wallace Breza <wallace@breza.me>
Date:   Thu Dec 6 09:58:39 2018 -0800

    Common React Component Unit Tests (#19)
    
    * Added unit tests for condensed list component
    
    * Added additional tests for the nth item
    
    * Added unit tests for conditional nav link
    
    * Added unit tests for file picker component
    
    * Added unit tests for local folder picker component
    
    * Added HTML file reader tests

[33mcommit ed64383f426c70def384ebcb24f7f1b6330c5750[m
Author: Wallace Breza <wallace@breza.me>
Date:   Wed Dec 5 11:28:07 2018 -0800

    Fixed issue where local file system proxy options doesn't allow null (#18)

[33mcommit 04ec7fc4a6ec025450cf479ee68d71ce6a4eb522[m
Author: Wallace Breza <wallace@breza.me>
Date:   Tue Dec 4 17:59:42 2018 -0800

    Introduce AssetProvider / AssetService (#15)
    
    * Started on asset service
    
    * Added baseline editor page and load assets from storage provider
    
    * Defined the application & asset structure to be used for new save format
    
    * Split out asset from asset metadata
    
    * Updated editor page to load and view edit components
    
    * Added basic support for bing image search
    
    * Started migration to simplified IAssetProvider
    
    * Added unit tests for storage/asset factory and bing image provider
    
    * fixed bing image search provider tests
    
    * Added more unit tests and guard class to help validate method params
    
    * Rebased from folder re-structure
    
    * Fixed variable definition
    
    * Fixed azure blob service tests

[33mcommit 55279a7e4ff4537bc74215373ca72b1d12a75618[m
Merge: dce2be2 4af0979
Author: Elizabeth Halper <elhalper@microsoft.com>
Date:   Tue Dec 4 14:49:34 2018 -0800

    Merge pull request #16 from wbreza/feature/15807/canvas-npm
    
    Add Canvas Tools to package.json

[33mcommit 4af0979733c9f3b54d055b21fbad4ce8a50224b0[m
Author: Elizabeth Halper <elhalper@microsoft.com>
Date:   Tue Dec 4 14:42:32 2018 -0800

    created git repo ref

[33mcommit dce2be226d254c1b3bed9d1aa8a1fba1cef71e1b[m
Merge: c302e2f 113ac9b
Author: Wallace Breza <wallace@breza.me>
Date:   Tue Dec 4 13:07:47 2018 -0800

    Merge pull request #14 from wbreza/lumirand-folder-structure
    
    separated react and redux into folders

[33mcommit 113ac9b22cb504a2c2f81ba81d027c20f10c7b75[m
Author: Luisa de Miranda <lumirand@microsoft.com>
Date:   Mon Dec 3 15:10:11 2018 -0800

    separated react and redux into folders

[33mcommit c302e2f1478f10d990c96635fa9e8b5c27cfc034[m
Merge: 647c07b 9083d06
Author: Wallace Breza <wallace@breza.me>
Date:   Tue Dec 4 11:46:07 2018 -0800

    Merge pull request #8 from wbreza/tbarlow12/azure-blob
    
    Azure blob storage provider with library and unit tests

[33mcommit 9083d06d1ca87a6a467cc1d1a4727a6f49b6838a[m
Author: Tanner Barlow <tanner.barlow12@gmail.com>
Date:   Fri Nov 30 11:36:11 2018 -0800

    make getContainerName and getFileName private

[33mcommit b2bc3dd592461185530e71768df6769cbf0359f2[m
Author: Tanner Barlow <tanner.barlow12@gmail.com>
Date:   Fri Nov 30 11:22:19 2018 -0800

    Rename interface with I

[33mcommit 9975cf57b6ee8b753deaed981b265e4d8ecbff13[m
Author: Tanner Barlow <tanner.barlow12@gmail.com>
Date:   Fri Nov 30 11:19:06 2018 -0800

    lint fixes

[33mcommit 893c3173d17af7104e6ce32da0fa7d9353dd66f3[m
Merge: 617c4ad 647c07b
Author: Tanner Barlow <tanner.barlow12@gmail.com>
Date:   Fri Nov 30 11:14:02 2018 -0800

    merge in master

[33mcommit 617c4ad3ea9305c5a1c38fa07943c81482d77962[m
Author: Tanner Barlow <tanner.barlow12@gmail.com>
Date:   Fri Nov 30 10:26:24 2018 -0800

    passing test for creating blob service

[33mcommit ff6c068f6f65d522da9f0d942568184d0cdb33f1[m
Author: Tanner Barlow <tanner.barlow12@gmail.com>
Date:   Fri Nov 30 10:06:30 2018 -0800

    tests passing

[33mcommit 647c07b1baa690cde3b95aae784ea6b897017810[m
Merge: e958c6f 1fc3cdf
Author: Wallace Breza <wallace@breza.me>
Date:   Thu Nov 29 14:47:53 2018 -0800

    Merge pull request #11 from wbreza/wabrez/fix-connection-form
    
    Fixed issue with connection form

[33mcommit 1fc3cdf3ee6cd367a3cbe595b7b0d9dac7a9fe64[m
Author: Wallace Breza <wallace.breza@microsoft.com>
Date:   Thu Nov 29 14:39:30 2018 -0800

    Fixed issue with connection form

[33mcommit e958c6f1a76acf402959137a33bbe1e547d955cb[m
Merge: 67c3eb4 f22d79f
Author: Wallace Breza <wallace@breza.me>
Date:   Thu Nov 29 13:35:18 2018 -0800

    Merge pull request #10 from wbreza/connection-picker-updates
    
    Connection picker updates

[33mcommit f22d79f6cde66338a4f7f44c76205b5d60e00248[m
Author: Wallace Breza <wallace.breza@microsoft.com>
Date:   Thu Nov 29 11:30:53 2018 -0800

    Fixed ts linting issues

[33mcommit 0eccc58e0a8e946bbcd6efb62e2be837d517dd23[m
Author: Wallace Breza <wallace.breza@microsoft.com>
Date:   Wed Nov 28 15:56:44 2018 -0800

    Added unit test to validate change handler

[33mcommit b8473a2f4a517c303e4a1fa48a15682a59661b4f[m
Author: Wallace Breza <wallace.breza@microsoft.com>
Date:   Wed Nov 28 15:00:12 2018 -0800

    Added connection picker tests

[33mcommit bfd1d99540545f26d69585cc89868b1c7d4d42b7[m
Author: Wallace Breza <wallace.breza@microsoft.com>
Date:   Wed Nov 28 13:46:30 2018 -0800

    Removed redux state from connection picker

[33mcommit 67c3eb4262f72ad6f753431082b039e46ff8bb70[m
Merge: 5fd7046 7ac1d8f
Author: Wallace Breza <wallace@breza.me>
Date:   Thu Nov 29 10:22:39 2018 -0800

    Merge pull request #9 from wbreza/tbarlow12/tslint
    
    Add Travis, TSLint and lint fixes

[33mcommit 7ac1d8fd52ec4f63c8639e271cd77858e720ab7d[m
Author: Tanner Barlow <tanner.barlow12@gmail.com>
Date:   Thu Nov 29 07:25:26 2018 -0800

    ignore alphabetic rule, change to double quotes

[33mcommit b5412891e23ff54512da975fe54bf5893d81d29e[m
Merge: bc6a51a 5fd7046
Author: Tanner Barlow <tanner.barlow12@gmail.com>
Date:   Wed Nov 28 15:06:38 2018 -0800

    merge in master

[33mcommit bc6a51a42a94cc15fd2c1f2986c5aaf3d31f685c[m
Author: Tanner Barlow <tanner.barlow12@gmail.com>
Date:   Wed Nov 28 15:04:49 2018 -0800

    Add lint fixes and travis file

[33mcommit 63e86f58499be669afc65dd5fbbda8425920fb35[m
Author: Tanner Barlow <tanner.barlow12@gmail.com>
Date:   Wed Nov 28 14:38:38 2018 -0800

    run tslint autofix

[33mcommit a1327ff804cb5376d98166428ded7add9475b04c[m
Author: Tanner Barlow <tanner.barlow12@gmail.com>
Date:   Wed Nov 28 14:38:13 2018 -0800

    add config file and install tslint

[33mcommit 5fd704680ce42fc75b602265b9aedfdeb01f30cd[m
Merge: f836b5a be6579e
Author: Wallace Breza <wallace@breza.me>
Date:   Wed Nov 28 14:16:06 2018 -0800

    Merge pull request #6 from wbreza/new-tags-widget
    
     New tags widget with styling and custom project form component

[33mcommit be6579ee5aa4d246d85ba303a6b219390699ab58[m
Author: Wallace Breza <wallace.breza@microsoft.com>
Date:   Wed Nov 28 14:14:31 2018 -0800

    Rebased and merged from master

[33mcommit 9bb94837e487fa2ad90b88778a4136676025ee33[m
Author: Tanner Barlow <tanner.barlow12@gmail.com>
Date:   Mon Nov 26 12:39:30 2018 -0800

    fix merge conflict error

[33mcommit 3852d1322c2b35665ecfe5a0cd78563d195e3855[m
Author: Tanner Barlow <tanner.barlow12@gmail.com>
Date:   Wed Nov 21 16:15:00 2018 -0800

    New tags widget with styling and custom project form component

[33mcommit b2f012828b448410b5cb848bf00d10435b65863c[m
Merge: f18b2f4 f836b5a
Author: Tanner Barlow <tanner.barlow12@gmail.com>
Date:   Wed Nov 28 13:47:43 2018 -0800

    merge master

[33mcommit f18b2f44721db84ff8234faf4f93e03ff577da8b[m
Author: Tanner Barlow <tanner.barlow12@gmail.com>
Date:   Wed Nov 28 13:41:42 2018 -0800

    Azure blob storage provider with unit tests

[33mcommit f836b5acbb11511fa80b71c512905c19a43be155[m
Merge: 4b64271 e39a4b3
Author: Tanner Barlow <tanner.barlow12@gmail.com>
Date:   Wed Nov 28 13:39:46 2018 -0800

    Merge pull request #7 from wbreza/wabrez/connection-picker
    
    Connection Picker, Local File System Storage Provider & Tests

[33mcommit e39a4b3f869e01778c8649d7824b325e1fc97b18[m
Author: Wallace Breza <wallace.breza@microsoft.com>
Date:   Wed Nov 28 11:00:16 2018 -0800

    Added tests for common modules

[33mcommit 5bc1b44be385262262496c3efce54ebb04ae4dcc[m
Author: Wallace Breza <wallace.breza@microsoft.com>
Date:   Tue Nov 27 18:39:22 2018 -0800

    Added StorageProviderFactory

[33mcommit f438cd2488b3a220a4c79503985ab340b1c859b9[m
Author: Wallace Breza <wallace.breza@microsoft.com>
Date:   Tue Nov 27 15:03:46 2018 -0800

    refact file system provider tests

[33mcommit e72785638ce07ecd9a799205975f94dea3b3b0dd[m
Author: Wallace Breza <wallace.breza@microsoft.com>
Date:   Tue Nov 27 08:30:44 2018 -0800

    Updated local file system provider and added tests

[33mcommit 86b9b210545ed53dda6a17f3e638d780221979c9[m
Author: Wallace Breza <wallace.breza@microsoft.com>
Date:   Mon Nov 26 13:10:18 2018 -0800

    Wired up connection picker options

[33mcommit b5d076192a952aa16c3ac0c9cb89c22a924adfae[m
Author: Wallace Breza <wallace.breza@microsoft.com>
Date:   Sun Nov 25 16:44:32 2018 -0800

    Added connection picker component

[33mcommit 4b642719de453350c10a32fda89d622c2bfeba30[m
Author: Wallace Breza <wallace.breza@microsoft.com>
Date:   Wed Nov 21 13:27:38 2018 -0800

    Delete project file when project is deleted

[33mcommit bdd0f81c94135494dfea58d1a55cac1805b2925b[m
Author: Wallace Breza <wallace.breza@microsoft.com>
Date:   Wed Nov 21 13:21:19 2018 -0800

    Added saving projects to local folder

[33mcommit fe52f11bb206bf180117978f081e4b7c1005907c[m
Merge: 8f945b3 5140831
Author: Wallace Breza <wallace@breza.me>
Date:   Wed Nov 21 13:01:57 2018 -0800

    Merge pull request #5 from wbreza/wabrez/connections-page
    
    Connections page

[33mcommit 514083192b69d9855d233645acf9fef970a66bf7[m
Author: Wallace Breza <wallace.breza@microsoft.com>
Date:   Wed Nov 21 12:58:46 2018 -0800

    Added LocalFolderPicker electron component

[33mcommit fd5e98f8543b2f4a025ce2ccb71102ff5d9901ea[m
Author: Wallace Breza <wallace.breza@microsoft.com>
Date:   Wed Nov 21 10:27:37 2018 -0800

    Updated connections page to reuse form binding logic

[33mcommit cbd4c453a94044c95f9057601898ed3aaf33eb47[m
Author: Wallace Breza <wallace.breza@microsoft.com>
Date:   Wed Nov 21 10:20:41 2018 -0800

    Fixed issue in connection page with properties not loading

[33mcommit 1b350ac34e1faec4863be25757a2d2076dd6d625[m
Author: Wallace Breza <wallace.breza@microsoft.com>
Date:   Wed Nov 21 10:17:03 2018 -0800

    Add new/edit/delete flow for connections page

[33mcommit 8f945b3b6bf92ec26855b8718b83a1bac17fd95c[m
Author: Wallace Breza <wallace.breza@microsoft.com>
Date:   Tue Nov 20 18:53:02 2018 -0800

    Wired up page transitions and local storage project service

[33mcommit ef85c8802f2eee16008f201e34c5cecef903079d[m
Merge: 3f2afd0 1be457f
Author: Wallace Breza <wallace@breza.me>
Date:   Tue Nov 20 15:08:16 2018 -0800

    Merge pull request #3 from wbreza/open-project-flow
    
    Open project flow

[33mcommit 1be457f7bf1ab6a50680e72e6c0b034ac6020e83[m
Author: Wallace Breza <wallace.breza@microsoft.com>
Date:   Tue Nov 20 15:03:15 2018 -0800

    Added HTML file reader and FilePicker components

[33mcommit ff0f09ea3ca739e1a38f21a7ce8f2cff0ccabf6a[m
Author: Wallace Breza <wallace.breza@microsoft.com>
Date:   Tue Nov 20 13:48:22 2018 -0800

    Wired up open project flow to project settings

[33mcommit 3f2afd0a389d5a03e4ac130987a48b5ef815ee74[m
Author: Wallace Breza <wallace.breza@microsoft.com>
Date:   Tue Nov 20 12:18:10 2018 -0800

    Added sample data and wires up pages from redux store

[33mcommit df2dc45da56356c7afa21fae16a9219f337487ce[m
Author: Wallace Breza <wallace.breza@microsoft.com>
Date:   Tue Nov 20 11:13:47 2018 -0800

    Added shell for homepage and created condensed list component

[33mcommit 385cde713507c99b88ddeb75410785ae15909a80[m
Merge: b9fdd84 a3e64eb
Author: Wallace Breza <wallace@breza.me>
Date:   Mon Nov 19 14:13:36 2018 -0800

    Merge pull request #2 from wbreza/wabrez/ipc-promise
    
    IPC promise wrapper and connection form updates

[33mcommit a3e64ebaa4e8ba1ef41b982bcd4b9bef7b584bc4[m
Author: Wallace Breza <wallace.breza@microsoft.com>
Date:   Mon Nov 19 14:12:20 2018 -0800

    Added connection page sass file

[33mcommit dc1999c6e07f703e22b23c92b79d73299b3ed4a4[m
Author: Wallace Breza <wallace.breza@microsoft.com>
Date:   Mon Nov 19 14:05:40 2018 -0800

    Added sidebar for connection listing

[33mcommit cbda3f9ddb269e2fb7e7d9db6668fb72aa0ac9c7[m
Author: Wallace Breza <wallace.breza@microsoft.com>
Date:   Mon Nov 19 13:56:33 2018 -0800

    wired up form submit

[33mcommit 64d787185dfccba998aa3e7869dd3a7abb5af821[m
Author: Wallace Breza <wallace.breza@microsoft.com>
Date:   Mon Nov 19 13:53:39 2018 -0800

    Removed unused shortid

[33mcommit 67de0f599fdd2f8ecc0175dce2407f99be2411e3[m
Author: Wallace Breza <wallace.breza@microsoft.com>
Date:   Mon Nov 19 13:49:58 2018 -0800

    Fixed form state issues

[33mcommit c3b2e7defe1fc17c6ee200c805af00eb37039ff7[m
Author: Wallace Breza <wallace.breza@microsoft.com>
Date:   Mon Nov 19 13:36:58 2018 -0800

    progress...

[33mcommit 12b2470854a79764eb76d34bab96aa2656902e3b[m
Author: Wallace Breza <wallace.breza@microsoft.com>
Date:   Mon Nov 19 12:27:48 2018 -0800

    conneciton page split forms

[33mcommit 3f80289afdd82050765aed4eac474a6dfb9dffdd[m
Author: Wallace Breza <wallace.breza@microsoft.com>
Date:   Mon Nov 19 11:27:27 2018 -0800

    Added wrapper for ipc based promises

[33mcommit b9fdd8406ab14eb574597027af31ddec508a5aa3[m
Merge: 7f2c623 4f6d644
Author: Tanner Barlow <tanner.barlow12@gmail.com>
Date:   Fri Nov 16 17:24:31 2018 -0800

    Merge pull request #1 from wbreza/connections-page
    
    Basic connections page

[33mcommit 4f6d64436875606eb2d28c22721ea17cfd3be373[m
Author: Tanner Barlow <tanner.barlow12@gmail.com>
Date:   Fri Nov 16 17:23:10 2018 -0800

    move schemas to json files

[33mcommit 7f2c6234f52ec81fd9adac42f30d3c37dd6fdb3f[m
Author: Wallace Breza <wallace.breza@microsoft.com>
Date:   Fri Nov 16 17:14:33 2018 -0800

    add application redux actions

[33mcommit a5f802fb17d672e50b262e47dced43346188a418[m
Author: Tanner Barlow <tanner.barlow12@gmail.com>
Date:   Fri Nov 16 16:37:12 2018 -0800

    Added basic project settings page in similar format

[33mcommit 41f9abdc91040b2820bfcc234397d689cd5aeb7f[m
Author: Tanner Barlow <tanner.barlow12@gmail.com>
Date:   Fri Nov 16 15:43:38 2018 -0800

    inline logging

[33mcommit 64f1560fe686e02ce207f1913517646909355357[m
Author: Tanner Barlow <tanner.barlow12@gmail.com>
Date:   Fri Nov 16 15:40:48 2018 -0800

    remove unnecessary uischema.json

[33mcommit 0ff5a60da67999fbe68997402ede2c862a33dda8[m
Author: Tanner Barlow <tanner.barlow12@gmail.com>
Date:   Fri Nov 16 15:39:26 2018 -0800

    Basic connections page

[33mcommit 00dca8dfa1c46622a3129b12a8740a1b35959b16[m
Author: Wallace Breza <wallace.breza@microsoft.com>
Date:   Fri Nov 16 14:52:37 2018 -0800

    Added component tests for navbar and sidebar

[33mcommit 894e448de64965634981fc0fddeb09973baf528d[m
Author: Wallace Breza <wallace.breza@microsoft.com>
Date:   Fri Nov 16 10:58:12 2018 -0800

    Added shell, router and page components

[33mcommit 53b2a5ccd4d7ddb5590ca94364b6e5cb95fb337b[m
Merge: 74ab526 12e8b3d
Author: Wallace Breza <wallace.breza@microsoft.com>
Date:   Fri Nov 16 08:06:15 2018 -0800

    Merge branch 'master' of https://github.com/wbreza/vott-react-typescript

[33mcommit 74ab52693e47fbf2efda41be017aeee3b8ec9502[m
Author: Wallace Breza <wallace.breza@microsoft.com>
Date:   Fri Nov 16 08:05:37 2018 -0800

    Added bootstrap dependencies

[33mcommit 12e8b3dfbfab3651eb977bf59365126bce40e35d[m
Author: Wallace Breza <wallace.breza@microsoft.com>
Date:   Thu Nov 15 18:01:31 2018 -0800

    Added balsalmiq wireframes

[33mcommit 3039934a5a271486dd05d023b078319ed06dfac9[m
Author: Wallace Breza <wallace.breza@microsoft.com>
Date:   Wed Nov 14 15:54:03 2018 -0800

    Fixed issue with electron main pipeline

[33mcommit 8e42ad3cd33e8fa2ad85b0e1c87e224af24030d2[m
Author: Wallace Breza <wallace.breza@microsoft.com>
Date:   Wed Nov 14 14:08:33 2018 -0800

    Initial commit from Create React App
