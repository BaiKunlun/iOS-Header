//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <WorkflowKit/WFHandleCustomIntentAction.h>

@interface WFChooseFromListAction : WFHandleCustomIntentAction
{
}

- (_Bool)shouldBeSuggestedAfterAction:(id)arg1 inWorkflow:(id)arg2;
- (void)getOutputFromIntentResponse:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)resolveSlot:(id)arg1 withProcessedValue:(id)arg2 parameter:(id)arg3 input:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (_Bool)populatesInputFromInputParameter;
- (void)presentAlertWithUserInterface:(id)arg1 input:(id)arg2;
- (id)contentItemsFromSelectedItem:(id)arg1;
- (id)itemsFromDictionaryItem:(id)arg1;
- (void)runAsynchronouslyWithInput:(id)arg1;

@end

